/**
* @brief Authorize.h�����ܹ���Ȩ��������,ֻ������SafeNet��˾��Sentinel HASP

* @author: hehao
* @version: v1.0
* @data: 2012.10.25
*/

#ifndef AUTHORIZE_H
#define AUTHORIZE_H
#include <gtk/gtk.h>

class CAuthorize {
public:
    static CAuthorize *GetInstance();
    virtual ~CAuthorize();
    void Excute(int argc, char *argv[]);
    void AddTimeout();

    /*
     * �������ܣ���֤key����Ч��
     * ������
     *    feature������ID
     *  ����ֵ:
     *    0:��Ȩ   -1:δ�ҵ��豸   -2������  -3��δ��Ȩ
     */
    int CheckAuthorize(unsigned int feature);

private:
    CAuthorize();
    static gboolean CallbackUKey(gpointer data);

    int m_timeoutIdUkey;
};

#endif //AUTHORIZE_H
