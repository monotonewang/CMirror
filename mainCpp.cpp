
//// Created by wang on 2018/7/6.

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void getYear();

int main() {
    cout << "Hello!" << endl;
    cout << "Welcome to C++!" << endl;

    getYear();
    char te='\0';
    cout << te << endl;
    auto f=3.14;      //double 声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。
    cout <<"the f value is="<< f << endl;

    // 设置种子
    srand( (unsigned)time( NULL ) );
    cout <<"随机数： " << rand() << endl; 
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    cout <<"balance " << balance[0] <<"address="<< &balance[0]<< endl; 
    time_t now = time(0);
    clock_t nowc = clock();
     // 把 now 转换为字符串形式
    char* dt = ctime(&now);
 
    cout << "clock_t=" << nowc << endl;
    cout << "本地日期和时间：" << dt << endl;
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;

    char str[] = "Unable to read....";
 
    cerr << "Error message : " << str << endl;

    return 0;
}

void getYear(){
    //获取闰年
  int year=2020;
  for (int i = 1990; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " is leap year" << endl;
        }
    }
}



// void testChar();

// void testType();

// void testEnum(int i);

// void testExtern();

// void testNumber();

// void testDefine();

// void testConst();

// void testSign();

// void testNamespace();

// // 变量声明
// extern int a, b;
// extern int c;
// extern float f;


// /**
//  * 命名空间
//  */
// void testNamespace() {
// //    namespace Li=;
// //    {
// //        int flag = 1;
// //    }
// //    namespace Ming=;{
// //        bool flag = true;
// //    }
// }

// void testSign() {
//     short int i;           // 有符号短整数
//     short unsigned int j;  // 无符号短整数

//     j = 50000;

//     i = j;
//     cout << i << " " << j;

//     return;
// }

// void testConst() {
//     const int NUM = 10;
//     cout << NUM;
// }

// void testDefine() {
//     int area;

//     // 预处理器
// #define LENGTH 10
// #define WIDTH  5
// #define NEWLINE '\n'

//     area = LENGTH * WIDTH;
//     cout << area;
//     cout << NEWLINE;
//     return;
// }

// void testNumber() {
//     int a = 85;// 十进制
//     int b = 0213;// 八进制
//     int c = 0x4b;   // 十六进制
//     int d = 30; // 整数
//     int e = 30u;// 无符号整数
//     int f = 30l; // 长整数
//     int g = 30ul;// 无符号长整数
// //    浮点常量由整数部分、小数点、小数部分和指数部分组成。您可以使用小数形式或者指数形式来表示浮点常量。
// //    当使用小数形式表示时，必须包含整数部分、小数部分，或同时包含两者。当使用指数形式表示时， 必须包含小数点、指数，或同时包含两者。带符号的指数是用 e 或 E 引入的。
// //    下面列举几个浮点常量的实例：
//     double h = 3.14159;       // 合法的
//     double i = (double) 314159E-5L;    // 合法的
//     bool j = true;
//     cout << "testConst--a=" << a << endl;
//     cout << "testConst--b=" << b << endl;
//     cout << "testConst--c=" << c << endl;
//     cout << "testConst--d=" << d << endl;
//     cout << "testConst--e=" << e << endl;
//     cout << "testConst--f=" << f << endl;
//     cout << "testConst--g=" << g << endl;
//     cout << "testConst--h=" << h << endl;
//     cout << "testConst--i=\t" << i << endl;
//     cout << "testConst--j=\r" << j << endl;
//     cout << "\\" << endl;
//     cout << "\"" << endl;
//     cout << "\'" << endl;
//     cout << "\?" << endl;
// //    cout << "\a" <<  endl;
// //    cout << "\b" <<  endl;
// //    cout << "\f" <<  endl;
// //    cout << "\n" <<  endl;
// //    cout << "\r" <<  endl;
// //    cout << "\t" <<  endl;
// //    cout << "\v" <<  endl;
// //    cout << "\000" <<  endl;
// //    cout << "\xhh" <<  endl;
// }

// void testExtern() {
//     // 变量定义
//     int a, b;
//     int c;
//     float f;
//     int x = 10;
//     // 实际初始化
//     a = 10;
//     b = 20;
//     c = a + b;
//     cout << "testExtern--c=" << c << endl;

//     f = (float) (70.0 / 3.0);
//     cout << "testExtern--f=" << f << endl;
// }

// void testType() {
//     typedef int feet;//define type feet to int
//     feet distance = 1;
//     cout << "distance:" << distance << endl;
// }

// /**
//  * enum
//  * @param i
//  */
// void testEnum(int i) {
//     if (i == 1) {
//         enum color {
//             red, green, blue
//         } c1;
//         c1 = blue;
//         cout << "c1:" << c1 << endl;
//         return;
//     } else {
//         enum color {
//             red, green = 5, blue
//         } c2;
//         c2 = blue;
//         cout << "c2:" << c2 << endl;
//         return;
//     }
// }

// /**
//  * get sizeOf char int ...
//  */
// void testChar() {
//     cout << "size of char:" << sizeof(char) << endl;
//     cout << "Size of int : " << sizeof(int) << endl;
//     cout << "Size of short int : " << sizeof(short int) << endl;
//     cout << "Size of long int : " << sizeof(long int) << endl;
//     cout << "Size of float : " << sizeof(float) << endl;
//     cout << "Size of double : " << sizeof(double) << endl;
//     cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
// }

//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}