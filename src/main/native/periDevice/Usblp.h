#ifndef _USBLP_
#define _USBLP_

//#include <vector>
//#include <string>

#define REPORT_WIDTH 900	//��ӡ����ͼƬ�Ŀ�ȣ����ص�����
#define REPORT_HEIGHT 1300	//��ӡ����ͼƬ�ĸ߶ȣ����ص�����
#define BYTES_PER_PIXEL	3	//ÿ�����ص�ռ�õ��ֽ���
#define REPORT_WIDTH_BYTES	(REPORT_WIDTH*BYTES_PER_PIXEL)	//��ӡ����ͼƬ��һ�е��ֽ���
#define PRINTDIR "./res/printer/"
//#define PRINTIMAGE "/tmp/report.bmp"

#define PRINTIMAGE STORE_PATH "/0/" "report"
//#define PRINTIMAGE "/home/yang/001.png"
#define PRINT_FONTPATH	"./res/printer/wqy-zenhei.ttf"

/*
��ӡ������������
*/
struct print_re_item {
    char *id;
    char *name;
//hlx
#ifdef VET
    char *species;
    char *owner;
#endif

    char *check_num;
    char *sex;
    char *ageUnit;
    char *age;
    char *section;
    char *diag_date;
    char *hospital;
    char *diag_doctor;
    char *report_doctor;
    char *ul_idea;
    char *comment;
    char *image_data[2];//������ͼ�������
//	vector<string> imageName;
};

/*************************************************************
����:ͨ��Pango��ȡ�ַ������ڹ̶����塢��С��DPI������£��ڴ�ӡ�ı����еĳߴ�
const char *str:�ڴ�ӡ�����е�����
int *width:�ַ������_����Ϊ��λ
int *height:�ַ����߶�_����Ϊ��λ
ע�⣺����ֵPangoLayout��Ҫͨ��g_object_unref�ͷ�
*************************************************************/
PangoLayout* GetStringSizeInReport(const char *str, int *width, int *height, int font_size);

/*************************************************************
����:��ӡ����
struct print_re_item item:��ӡ������������
int size_x:ͼ����_����Ϊ��λ
int size_y:ͼ��߶�_����Ϊ��λ
unsigned char* printer_name: ��ӡ������
*************************************************************/
//extern int print_report(struct print_re_item item, int size_x, int size_y, gint8 language);
extern int print_report(int size_x, int size_y, gint8 language);
extern void itoa(int data, char *string, unsigned char length);

#endif
