#ifndef __SYSGENERALSETTING_H__
#define __SYSGENERALSETTING_H__

#include "base/IniFile.h"

class SysGeneralSetting {
public:

    SysGeneralSetting();
    ~SysGeneralSetting();

    void GetHospital(std::string& hospital);
    int GetLanguage(void);
    int GetDateFormat(void);
    int GetVideoMode(void);
    int GetConnectorType(void);
    int GetVideoFormat(void);
    int GetPrinterMethod(void);
    int GetPrinter(void);
    int GetScreenProtect(void);
    int GetPrintViewMode(void);
    void SetPrintViewMode(int viewMode);
    int GetAutoGeneratedID(void);
    void SetAutoGeneratedID(int Auto);
    int GetFID(void);
    int GetDirection(void);
    int GetScaleUnit(void);
    int GetTraceType(void);
    int GetSmooth(void);
    int GetThreshold(void);

    void SetHospital(const char *hospital);
    void SetLanguage(int language);
    void SetDateFormat(int format);
    void SetVideoMode(int videoMode);
    void SetConnectorType(int connectorType);
    void SetVideoFormat(int format);
    void SetPrinterMethod(int method);
    void SetPrinter(int printer);
    void SetScreenProtect(int screenProtect);
    void SyncFile(void);
    void DefaultFactory(void);
    void TVOutDefaultFactory(void);
    void SetDirection(int direction);
    void SetThreshold(int threshold);
    void SetSmooth(int smooth);
    void SetTraceType(int tracetype);
    void SetScaleUnit(int scaleunit);

#ifdef TRANSDUCER
    int GetPressAjust(void);
    void SetPressAdjust(double PressAjust);
#endif

private:
    IniFile *ptrIni;
};

#endif
