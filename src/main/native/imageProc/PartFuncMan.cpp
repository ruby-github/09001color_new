#include "imageProc/PartFuncMan.h"
#include "imageControl/Img2D.h"
#include "display/gui_global.h"
#include "imageProc/GlobalClassMan.h"
#include "display/HintArea.h"
#include "keyboard/KeyFunc.h"
#include "imageProc/ImgProc2D.h"
#include "imageProc/ImgProcM.h"
#include "imageProc/Zoom.h"
/*
 * @����һ����Ҫ�õ�value��������ͼ����Ĺ��ܺ���
 */

EKnobReturn GlobalZoom(EKnobOper oper) {
    Zoom::GetInstance()->GlobalZoomScale(oper);
    return OK;
}

EKnobReturn PIPZoom(EKnobOper oper) {
    Zoom::GetInstance()->PIPZoomScale(oper);
    return OK;
}

EKnobReturn GrayTransport(EKnobOper oper) {
    ImgProc2D::GetInstance()->ChangeGrayTransPointX(oper);
    return OK;
}
