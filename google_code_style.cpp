// Copyright (c) 2016, Zuocheng.net
//
// Author: Zuocheng Liu
//
// Lisence: GPL
//
// File: code_samples/code_style/google_code_style.cpp
// C++�ļ���.cpp ��β��ͷ�ļ���.h ��β��
//
// Google C++ code Style ����ʾ�� (�������İ�)

// **include�ļ�**
// ����.h �ļ���#include ������
// ����ͷ�ļ�����
// - ��cc��Ӧ��ͷ�ļ�
// - Cϵͳ�ļ�
// - C++ϵͳ�ļ�
// - ������ͷ�ļ�
// - ����Ŀ��ͷ�ļ�
#include "google_code_style.h"

#include <stdio.h>

#include <string>


// - ��Ҫ��.h �ļ��ж���ꣻ
// - ʹ��ǰ��ȷ#define��ʹ�ú���ȷ#undef��
// - ��Ҫֻ�Ƕ��Ѿ����ڵĺ�ʹ��#undef��ѡ��һ�������ͻ�����ƣ�
// - ��ʹ�ûᵼ�²��ȶ���C++���죨unbalanced C++ constructs������ע���ĺ꣬
// �����ĵ�˵������Ϊ��
#define MAX((a), (b)) ((a) > (b) ? (a): (b))

uint32_t GoogleCodeStyle::MyExcitingMethod(CodeStyle &code_style,
                                           char *output) {

}
