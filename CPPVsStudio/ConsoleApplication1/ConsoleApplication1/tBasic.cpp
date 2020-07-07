//
//  tBasic.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/21.
//  Copyright  2020 fu qingwang. All rights reserved.
//
#include "tBasic.h"

//内联行数不是在调用的时候发生转移，而是在编译的时候将函数体嵌入到调用处，结构简单
inline double calArea(double radius) {
    return M_PI * radius * radius;
}

//带默认参数的函数
int add(int x = 5, int y = 6) {
    return x + y;
}
int add(int x = 5, int y = 6, int z = 1) {
    return x + y + z;
}

void testTime() {
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把 now 转换为字符串形式
    char* dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;
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
    //获取闰年
    int year = 2030;

    for (int i = 1990; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " is leap year" << endl;
        }
    }
}

void testEnum() {
    enum WeekDay { SUN, MON, TUE = 7 };//初始值 0
    cout << "SUN=" << SUN << "TUE=" << TUE << endl;
}

void testString() {
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int  len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    //     连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}

void tBasicInfo() {
    cout << "Hello!" << endl;
    cout << "Welcome to C++!" << endl;

    int* p = new int(1);//堆区数据
    cout << "*p=" << (short)*p << endl;
    cout << "*p=" << (short)*p << endl;
    cout << "&p=" << &p << endl;
    delete p;//释放内部
    //cout << "*p=" << (short)*p << endl;
    cout << "&p=" << &p << endl;
    long a = 100;
    long c = 200;
    long& b = a;
    //    &b=c;//引用必须要初始化，一旦初始化，不可以改变指向。 error
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b = 16;
    cout << "after a=" << a << endl;
    cout << "after b=" << b << endl;

    // cin>>a;//用户输入a的值，相对于java Scanner
    // cout <<a++<< endl;
    cout << "a=" << ++a << endl;
    cout << sizeof(a) << endl;//返回的是a在内存中所占用的字节数
    bool b1 = a;
    cout << b1 << endl;//返回的是1,可以将short转bool
    double f1 = M_PI;
    int i1 = int(f1);//c++显式风格装换数据类型
    // int i1=(int)f1;//c显式风格装换数据类型 这里只做介绍。
    cout << i1 << endl;
    cout << setw(5) << setprecision(20) << M_PI << endl;

    cout << "calArea=" << calArea(2) << endl;
    cout << "add=" << add(3, 1, 2) << endl;
}


void testSrand() {
    int i, j;

    // 设置种子
    srand((unsigned)time(NULL));

    /* 生成 10 个随机数 */
    for (i = 0; i < 4; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << "随机数： " << j << endl;
    }
}

