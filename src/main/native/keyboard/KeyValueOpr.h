//*************operator.h

#ifndef __KEY_OPERATOR_H_
#define __KEY_OPERATOR_H_
#include "AbsUpdate2D.h"
#include <gtk/gtk.h>
#include "Def.h"
#include <vector>
#include "keyboard/KeyBoard.h"
#include "AbsKeyboardEvent.h"

using std::vector;

/************************************
 *KeyValueOpr:		���̽ӿ���
 *.WinOptStack:		���ڱ���������ڶԼ��̵���Ӧ����ָ���vector
 *.SendLightValue: 	���ռ��̵�ֵ,������ֵ���͸�����
 *.Push: 			��ÿ�����ڽ���ʱ���ô˺����������ڶԼ��̵���Ӧ����ָ��ѹ��vector
 *.Pop:				��ÿ�������˳��ǵ��ô˺����������ڶԼ��̵���Ӧ����ָ���vector����
 *.GetElement:		���vector�ĵ�n��Ԫ�أ��˺�����ʱû��
 *.SendKeyValue:	�����յ��ļ�ֵ���͸���������
 ***********************************/

class KeyValueOpr {
public:
    KeyValueOpr( );

    void CtrlLight(bool on, unsigned char lightValue );
    void Push( AbsKeyboardEvent * win_opr );
    void Pop( );
    bool Empty();
    int Size();
    AbsKeyboardEvent * GetElement( int n );
    void SendKeyValue( unsigned char *keyValue );
    void SetMouseSpeed( int s);
    int GetMouseSpeed(void);
    bool IsLighten(unsigned char lightValue);
    void ListLighten(); //for debug
private:
    int m_mouseSpeed;
    vector<AbsKeyboardEvent *> WinOprStack;
    void SendLightValue( unsigned char light_value );

    vector<unsigned char> m_vecLighten;
    void AddLighten(unsigned char lightValue);
    void RemoveLighten(unsigned char lightValue);
};

extern KeyValueOpr g_keyInterface;

//��ȡ��ֵ�����͸���������
extern gboolean GetKeyValue(GIOChannel *source, GIOCondition condition, gpointer data);

//���̼���
extern void *KeyboardOversee( void * pKeyInterface, bool isHandShake = true);

//�����ü���TGCֵ
void KeyboardRequestTGC(void);

//������������
void KeyboardSound(bool value);

#endif //__OPERATOR_H_
