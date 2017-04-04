// -*- c++ -*-
#ifndef MEASURE_MAN_H
#define MEASURE_MAN_H

#include <deque>
#include <string>
#include <vector>
#include "Def.h"
#include "calcPeople/MeaResult.h"
#include "measure/MeasureDraw.h"
#include "measure/UpdateMeasure.h"

using std::deque;
using std::string;
using std::vector;

///> if or not change cursor to menu area after measure one item
void SetChangePointerMeasure(void);
void SetChangePointerCalc(void);
///> change pointer when input "true" to SetChangePointer
void ChangePointerWhenMeasure(void);

class MeasureMan {
public:
    ~MeasureMan();
    static MeasureMan* GetInstance();

    void AddNew(EMeaType measureType, int cursorType ,vector<POINT> vec, int cursorSize, int confirmColor);
    void AddNewAdjust(EMeaType measureType, int cursorType ,vector<POINT> vec, int cursorSize, int confirmColor);
    void ClearPwTraceUnFreeze();
    void ClearLast();
    void ClearFirst();
    void ClearAll();
    void ClearAllValue(void);
    void GetMeasureUnit(float& coeffi, string& units, int unit);
    int GetDequeSize();

    void DeleteAllForClearScreen(bool update=true);

    void SetMeasureResult(float value[MEA_MULTI], const int item, const int valueNums);
    const char* GetMeasureTitle(int item);
    void GetMeasureString(int item, const SingleItemInfo **ptrSingleItemInfo, const MultiItemInfo **ptrMultiItemInfo);//�������ṩ�����ͼ�������Ƶ�λ
    void SingleMeaDataMan(const float meaData, const SingleItemInfo *itemInfo, float allData[SINGLE_MAX], const int saveR);
    void MultiMeaDataMan(float meaData[MEA_MULTI], const MultiItemInfo *itemInfo, float allData[SINGLE_MAX], const int saveR);
    void BPDMeaDataMan(const float meaData, const SingleItemInfo *itemInfo, float allData[SINGLE_MAX], const int saveR);//��BPD����ļ���ֵ̫�࣬������CALC_MAX�ķ�Χ
    void SetManualAutoTrace(POINT start, POINT end, POINT ps, POINT ed, int curOpt=1);
    void ReDrawManualAutoStartLine(bool draw=false);
    void ManualAutoAdjust(int current, bool draw=false);

private:
    MeasureMan();

    struct MeasureInfo {
        EMeaType measureType;
        int cursorType;
        int cursorSize;
        int confirmColor;
        vector<POINT> vecPoint;
        vector< vector<POINT> > vecTrackPoint;
        int meaType;
        int step;//��ǰ����������ⶳ�жϣ����¼�ⶳ�����ڵڼ�������
        int orderNumber;
        //string strResult;
    };

    MeasureDraw m_draw;
    UpdateMeasure m_update;

    static MeasureMan* s_ptrInstance;
    static const int MAX = 4;//��Ļ�ϲ�������ౣ��MAX��

    deque<MeasureInfo> m_deq; ///< define an sequence container, including MAX memebers.

    MeaResult *m_ptrMeaResult;
    POINT m_startP;
    POINT m_endP;
    POINT m_psP;
    POINT m_edP;
    bool m_pwAdjust;
    int m_orderNumBak;

    ///> fun
    void EraseMeasureLine(MeasureInfo info);
    void EraseDist(MeasureInfo info);
    void EraseDist2Line(MeasureInfo info);
    void EraseTrack(MeasureInfo info);
    void EraseINTEGRALTrack(MeasureInfo info);
    void EraseSimpson(MeasureInfo info);
    void EraseAL(MeasureInfo info);
    //	void EraseSimpsonDiam(vector<POINT> track);
    void EraseDot(MeasureInfo info);
    void EraseRectangle(MeasureInfo info);
    void EraseEllipse(MeasureInfo info);
    void EraseVol3Axis(MeasureInfo info);
    void EraseVolEllipse2(MeasureInfo info);
    void EraseAngleDot(MeasureInfo info);//���㷨
    void EraseAngleLine(MeasureInfo info);//���߷�
    void EraseRatioDistDot(MeasureInfo info);//����������������㷨
    void EraseRatioDistPeri(MeasureInfo info);//�����ܳ���������
    void EraseRatioArea(MeasureInfo info);//�����������խ��
    void EraseRatioVol(MeasureInfo info);//�������
    void EraseRatioAngle(MeasureInfo info);//�Ƕȱ���
    void EraseHip(MeasureInfo info);
    void EraseEF(MeasureInfo info);
    void EraseTime(MeasureInfo info);
    void EraseVelD(MeasureInfo info);
    void EraseRI(MeasureInfo info);
    void ErasePGmean(MeasureInfo info);
    void EraseAccel(MeasureInfo info);
    void EraseTrace(MeasureInfo info);
    void EraseMeasureOrderNumber(MeasureInfo info);
    void ClearAllMeasureOrderNumber(void);
};

#endif
