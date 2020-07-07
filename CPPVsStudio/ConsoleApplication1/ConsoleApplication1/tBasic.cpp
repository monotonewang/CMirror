//
//  tBasic.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/21.
//  Copyright  2020 fu qingwang. All rights reserved.
//
#include "tBasic.h"

//�������������ڵ��õ�ʱ����ת�ƣ������ڱ����ʱ�򽫺�����Ƕ�뵽���ô����ṹ��
inline double calArea(double radius) {
    return M_PI * radius * radius;
}

//��Ĭ�ϲ����ĺ���
int add(int x = 5, int y = 6) {
    return x + y;
}
int add(int x = 5, int y = 6, int z = 1) {
    return x + y + z;
}

void testTime() {
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);

    // �� now ת��Ϊ�ַ�����ʽ
    char* dt = ctime(&now);

    cout << "�������ں�ʱ�䣺" << dt << endl;

    // �� now ת��Ϊ tm �ṹ
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC ���ں�ʱ�䣺" << dt << endl;
}

void checkInput() {
    int i = 0, j = 0, n;
    cout << "please input some number, 0 exit" << endl;
    cin >> n;
    while (n != 0) {
        if (n > 0) {
            i++;
        }
        if (n < 0) {
            j++;
        }
        cin >> n;
    }
    cout << "i=" << i << "j=" << j << endl;
}


void getLeanYear() {
    // for (int i = 0,j=0; i < 2020,j<2020; i++,j++) {
    // }
    //��ȡ����
    int year = 2030;

    for (int i = 1990; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " is leap year" << endl;
        }
    }
}

void testEnum() {
    enum WeekDay { SUN, MON, TUE = 7 };//��ʼֵ 0
    cout << "SUN=" << SUN << "TUE=" << TUE << endl;
}

void testString() {
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int  len;

    // ���� str1 �� str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // ���� str1 �� str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    //     ���Ӻ�str1 ���ܳ���
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}

void tBasicInfo() {
    cout << "Hello!" << endl;
    cout << "Welcome to C++!" << endl;

    int* p = new int(1);//��������
    cout << "*p=" << (short)*p << endl;
    cout << "*p=" << (short)*p << endl;
    cout << "&p=" << &p << endl;
    delete p;//�ͷ��ڲ�
    //cout << "*p=" << (short)*p << endl;
    cout << "&p=" << &p << endl;
    long a = 100;
    long c = 200;
    long& b = a;
    //    &b=c;//���ñ���Ҫ��ʼ����һ����ʼ���������Ըı�ָ�� error
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b = 16;
    cout << "after a=" << a << endl;
    cout << "after b=" << b << endl;

    // cin>>a;//�û�����a��ֵ�������java Scanner
    // cout <<a++<< endl;
    cout << "a=" << ++a << endl;
    cout << sizeof(a) << endl;//���ص���a���ڴ�����ռ�õ��ֽ���
    bool b1 = a;
    cout << b1 << endl;//���ص���1,���Խ�shortתbool
    double f1 = M_PI;
    int i1 = int(f1);//c++��ʽ���װ����������
    // int i1=(int)f1;//c��ʽ���װ���������� ����ֻ�����ܡ�
    cout << i1 << endl;
    cout << setw(5) << setprecision(20) << M_PI << endl;

    cout << "calArea=" << calArea(2) << endl;
    cout << "add=" << add(3, 1, 2) << endl;
}


void testSrand() {
    int i, j;

    // ��������
    srand((unsigned)time(NULL));

    /* ���� 10 ������� */
    for (i = 0; i < 4; i++)
    {
        // ����ʵ�ʵ������
        j = rand();
        cout << "������� " << j << endl;
    }
}

