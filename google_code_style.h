// Copyright (c) 2016, Zuocheng.net
//
// Author: Zuocheng Liu
//
// Lisence: GPL
//
// File: code_samples/code_style/google_code_style.h
// (�ļ���Ҫȫ��Сд�����԰����»��ߣ�_������ߣ�-��)
// C++�ļ���.cpp ��β��ͷ�ļ���.h ��β��
//
// Google C++ code Style ����ʾ�� (�������İ�)
//
// *ע��  ʹ��//��/* */����Ҫͳһ��
// *ע��  ÿһ���ļ���Ȩ��ɼ�������Ϣ�󣬶��ļ����ݽ���ע��˵��
// -------------------------------------------------------------��಻�ܳ���80��
#ifndef CODE_SAMPLES_CODE_STYLE_GOOGLE_CODE_STYLE_
#define CODE_SAMPLES_CODE_STYLE_GOOGLE_CODE_STYLE_
// �����ռ��������ȫСд�ģ�������������Ŀ���ƺ�Ŀ¼�ṹ
// ��Ҫ���������ռ�std �µ��κ�����
namespace code_samples {
namespace code_style {

// **��������**
// �����ܸ������������ƣ���Ҫ��Լ�ռ�
// ������һ��Сд�����ʼ����»�������
// ����ȫ�ñ�����������g_��ֲ���������
int g_my_exciting_global_variable;

// ֻ������������ʱ��struct �������������class
typedef struct CodeStyle {
    uint32_t type;
} CodeStyle;

// **��ע��**
// ÿ����Ķ���Ҫ����������Ĺ��ܺ��÷���ע��
//
// GoogleCodeStyle , ͨ������ʾ����չ��google c++ code style
//
// (����ע��synchronization assumptions���Ƿ��̰߳�ȫ)
class GoogleCodeStyle {
 public :

   // ** �������� **
   // - typedefs ��enums��
   // - ������
   // - ���캯����
   // - ����������
   // - ��Ա����������̬��Ա������
   // - ���ݳ�Ա������̬���ݳ�Ա��

   // **��������**
   // ÿ�������Դ�д��ĸ��ͷ���������»���
   // �����������������ࡢ�ṹ�塢���Ͷ��壨typedef����ö�١���ʹ����ͬԼ��
   typedef enum StyleType {
     // ö��ֵӦȫ����д�����ʼ����»�������
     GOOGLE_CODE_STYLE = 0,
     K_AND_R,
     POCO
   } StyleType;

   // ����������������ǰ��k
   const int kDaysInAWeek = 7;

   GoogleCodeStyle() {}
   ~GoogleCodeStyle() {}
   // **����ע��**
   // ����������ע�������������ܣ����崦��������ʵ��.
   // - inputs�����룩��outputs���������
   // - �����Ա�������ԣ����������ڼ�����Ƿ���Ҫ�������ò������Ƿ���ͷ���Щ������
   // - ������������˿ռ䣬��Ҫ�ɵ������ͷţ�
   // - �����Ƿ����ΪNULL��
   // - �Ƿ���ں���ʹ�õ��������ǣ�performance implications����
   // - ��������ǿ�����ģ�re-entrant������ͬ��ǰ�ᣨsynchronization assumptions��
   // ���� ��
   // ��ʼ������
   Init() {}

   // ��ͨ�������Դ�д��ĸ��ͷ��ÿ����������ĸ��д��û���»���
   //
   uint32_t MyExcitingMethod(CodeStype &code_style, char *output);
   // ��ȡ����Ҫ���ȡ�ı�����ƥ��
   inline int num_entries() const { return num_entries_; }
   inline void set_num_entries(int num_entries) { num_entries_ = num_entries; }

   // ��ĳ�Ա�������»��߽�β
   int num_completed_connections_;

 protected :

 private :
   // **�����ݳ�Ա**
   // ÿ�������ݳ�Ա��Ҳ��ʵ���������Ա������Ӧע��˵����;��
   // ����������Խ���NULL ��-1, �Ⱦ���ֵ��sentinel values������˵��֮
   int num_entries_;

}; // class GoogleCodeStyle

}} // namespace code_samples::code_style

#endif //CODE_SAMPLES_CODE_STYLE_GOOGLE_CODE_STYLE
