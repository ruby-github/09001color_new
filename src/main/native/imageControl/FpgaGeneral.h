#ifndef CFPAGGENERAL_H
#define CFPGAGENERAL_H
#include "imageControl/UsbControl.h"

typedef unsigned long int U32, *PU32;

#define  ADREFTYPE 0			//ADC �ο���ѹ���ͣ� 1�� �ⲿ�ο��� 0�� �ڲ��ο�
#define	TESTLVDSCHADDR		63
#define  AdcCtrlAddr		44		//ADC �Ĵ�����ַд���FPGA��ַ
#define  AdcCtrlData		45		//ADC �Ĵ�������д���FPGA��ַ
#define COMAddrFPGAAddrA	58
#define COMDataFPGAAddrA    59

/*
 * @brief class CFpgaGeneral control the 9273 para */
class CFpgaGeneral {
public:
    ~CFpgaGeneral();
    static CFpgaGeneral* GetInstance();
    bool	spand_scan_flag;
    unsigned char* venreq(unsigned char VendorReq,unsigned short ReqValue);
    void AD9273ControlInit(void);
    void AD5805ControlInit(void);
    void RunChip(void);
    void ResetControl(void);
    void PowerOff(void); //�ϵ�
    void Ready(void);
    void Update(void);
    void SetIndex(void);
    void AdjustOutputPhase(unsigned char chipcs, unsigned char phasevalue);
    void SpiControlSetting(unsigned int chipcs, unsigned int regaddr, unsigned int data);
    void AD9273_TestIO(bool TYPE);
    void AD9273_TestChNo(U32 ChipNo, U32 ChNoInChip);
    void ProbeSocketSel(U32 SocketNo);

    void AD9273_Test(unsigned char regaddr, unsigned char data);
    //void AD_PowerDown(void);
    //void AD_StandBy(void);
    //void AD_Device_Update(void);
    //void AD_Device_INDEX(void);
    //void AD_Reset(void);
    //void AD_OutputPhase_Adjust(U32 ChipCs, U32 PhaseValue);
    //void SpiControlSetting(U32 ChipCs, U32 RegAddr, U32 Data);
    ///void AD9273_Spi_Set(U32 ChipCs, U32 RegAddr, U32 Data);
private:
    CFpgaGeneral();
    static CFpgaGeneral *m_ptrInstance;
    unsigned char FPGAConData[32768];		//2^15(32K)
    unsigned char FpgaAddrData[512];
    unsigned char* VENbuffertemp;
    int flag;

};
#endif