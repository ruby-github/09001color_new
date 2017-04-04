#ifndef FREEZE_MODE_H
#define FREEZE_MODE_H

#include "AbsUpdateMix.h"
#include "imageProc/Replay.h"
#include "Def.h"

class FreezeMode {
public:
    ///< freeze mode, REPLAY:���ᣬ�����طŹ������۵�ǰͣ����һ֡; AUTOREPLAY���Զ��ط��У�FREEZE�����ᣬδ���طŹ���
    enum EFreezeMode {FREEZE, UNFREEZE, REPLAY, AUTOREPLAY};

    static FreezeMode* GetInstance();
    ~FreezeMode();

    void PressFreeze();
    void PressUnFreeze();

    EKnobReturn ChangeAutoReplay();
    void EnterAutoReplayView();
    void EnterAutoReplayReview();
    void ExitAutoReplay();
    void SetReplayMode();

    void EnterReplayMode();
    void ExitReplayMode();
    void Freeze();
    void UnFreeze();
    EFreezeMode GetFreezeMode() {
        return m_freezeMode;
    }
    void UpdateHospitalandpart(int date_format, const char *hospital_name);
    void FreezeEFOV();
    void UnFreezeEFOV();
    void Freeze4D();
    void UnFreeze4D();

private:
    FreezeMode();
    static FreezeMode* m_ptrInstance;

    // interface
    AbsUpdateMix* m_ptrUpdate;
    Replay* m_ptrReplay;

    EFreezeMode m_freezeMode;

};
#endif
