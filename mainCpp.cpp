//
//  main.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/19.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

////////////////////////////////////////////////////////////////////
//                          _ooOoo_                               //
//                         o8888888o                              //
//                         88" . "88                              //
//                         (| ^_^ |)                              //
//                         O\  =  /O                              //
//                      ____/`---'\____                           //
//                    .'  \\|     |//  `.                         //
//                   /  \\|||  :  |||//  \                        //
//                  /  _||||| -:- |||||-  \                       //
//                  |   | \\\  -  /// |   |                       //
//                  | \_|  ''\---/''  |   |                       //
//                  \  .-\__  `-`  ___/-. /                       //
//                ___`. .'  /--.--\  `. . ___                     //
//              ."" '<  `.___\_<|>_/___.'  >'"".                  //
//            | | :  `- \`.;`\ _ /`;.`/ - ` : | |                 //
//            \  \ `-.   \_ __\ /__ _/   .-` /  /                 //
//      ========`-.____`-.___\_____/___.-`____.-'========         //
//                           `=---='                              //
//      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^        //
//         佛祖保佑       永无BUG     永不修改                       //
////////////////////////////////////////////////////////////////////
// ————————————————
// 版权声明：本文为CSDN博主「欧阳鹏」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/ouyang_peng/java/article/details/51803181

#include <iostream>
#include <math.h>       /* cos */
#include <iomanip>
#include <cstring>
// #include "Point.h"

using namespace std;

void getLeanYear();
void checkInput();
void testEnum();

namespace MyClassNs{//使用命名空间，相当于package
    static int count=1;
    //start clock
    class Clock{
        //下面是内联函数的隐式声明
    public:
        Clock ();//系统默认生成构造函数
        Clock (int newH=0,int newM=0,int newS=0);
        void setTime(int newH=0,int newM=0,int newS=0);
        void showTime();
        void setHeight(int height);
        int getHour() const;
        void showArray(int[]);
        void showArray();
        int getHourMinuteSecondCount() const;
        // friend int distHour(Clock &c1,Clock &c2);//友元
        Clock(Clock &c);//复制构造函数
        // ~Clock();//空析构函数 类似java finalize
    private:
        mutable int hourMinuteSecondCount;//const下可修改
        const string name;
        static const string size;//静态常数据成员
        int hour,minute,second;
        int array[3]={1,2,3};
    protected:
        int height;
    };
    Clock::Clock(Clock &c){//复制构造函数实现
        hour=c.hour+1;
        minute=c.minute+2;
        second=c.second+3;
        cout << "call Clock copy function" << endl;
    }
    Clock::Clock (int newH,int newM,int newS){
        hour=newH;
        minute=newM;
        second=newS;
        count++;
    }
    int Clock::getHourMinuteSecondCount() const{
        hourMinuteSecondCount= hour+minute+second;
        return hourMinuteSecondCount;
    }
    //Clock成员函数的实现
    void Clock::setTime(int newH,int newM,int newS){
        hour=newH;
        minute=newM;
        second=newS;
    }
    void Clock::setHeight(int newHeight){
        height=newHeight;
    }
    void Clock::showArray(){
        for(int i=0;i<3;i++){
            cout << "call showArray empty index["<<i<<"]=" << array[i]<< endl;
        }
    }
    void Clock::showArray(int array[]){
        for(int i=0;i<3;i++){
            cout << "call showArray index["<<i<<"]=" << array[i]<< endl;
        }
    }
    
    
    void getClockHour(Clock c){
        cout << "c hour value"<<c.getHour() << endl;
    }
    Clock getClock(){
        Clock c(1,3,4);
        return c;
    }
    int Clock::getHour() const{//无须改变对象状态的成员函数，使用const修饰
        return hour;
    }
    inline void Clock::showTime() {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    
    //end clock
    class DailySuppily{
    public:
        DailySuppily(Clock clock);
        DailySuppily(DailySuppily &ds);
        int getDailySuppilyNums();
    private:
        Clock c1;
        int nums;
        
    };
    DailySuppily::DailySuppily(Clock c1):c1(c1){//组合类构造函数
        cout<<"DailySuppily 组合类构造函数c1.getHour()="<<c1.getHour()<<endl;;
        int hour=static_cast<int>(c1.getHour()*2);
        nums=hour;
        // cout<<"DailySuppily 组合类构造函数nums="<<nums<<endl;;
    }
    DailySuppily::DailySuppily(DailySuppily &ds):c1(ds.c1){//组合类复制函数
        cout<<"DailySuppily 组合类复制函数"<<endl;;
        nums=ds.nums;
    }
    int DailySuppily::getDailySuppilyNums(){
        return nums;
    }
    class TinyClock:public Clock{
    public:
        TinyClock();
        int getSize(){
            return height*2;
        };
        
    };
    // TinyClock::TinyClock (int height){
    //     height=height;
    //     count++;
    // }
}



//内联行数不是在调用的时候发生转移，而是在编译的时候将函数体嵌入到调用处，结构简单
inline double calArea(double radius){
    return M_PI*radius*radius;
}
//带默认参数的函数
int add(int x=5,int y=6){
    return x+y;
}
int add(int x=5,int y=6,int z=1){
    return x+y+z;
}
//友元函数实现定义在类外面
int distHour(MyClassNs::Clock &c1,MyClassNs::Clock &c2){
    int hour1=c1.getHour();
    int hour2=c2.getHour();
    return static_cast<int>(hour1-hour2);
}

void testClock(){
    MyClassNs::Clock mClock(2,3,4);
    MyClassNs::Clock mClock3(3,3,4);
    MyClassNs::Clock mClock2(mClock);
    // MyClassNs::TinyClock mTinyClock;
    // mTinyClock.setHeight(10);
    // cout<<"mTinyClock.getSize()"<<mTinyClock.getSize()<<endl;//函数返回值是类对象。函数返回，调用复制构造函数 注 不同编译器效果不一致
    
    getClockHour(mClock2);//对象2作为形参，第二次调用复制函数
    MyClassNs::getClock();
    cout<<mClock2.getHour()<<endl;//函数返回值是类对象。函数返回，调用复制构造函数 注 不同编译器效果不一致
    mClock2.showTime();
    int array[3]={1,2,3};
    mClock2.showArray();
    mClock2.showArray(array);
    // mClock.setTime()
    mClock.showTime();
    cout<<"MyClassNs::getHourMinuteSecondCount=="<<mClock.getHourMinuteSecondCount()<<endl;
    cout<<"MyClassNs mClock3::getHourMinuteSecondCount=="<<mClock3.getHourMinuteSecondCount()<<endl;
    cout<<"MyClassNs::count=="<<MyClassNs::count<<endl;
    cout<<"mClock.getHour()"<<mClock.getHour()<<endl;//函数返回值是类对象。函数返回，调用复制构造函数 注 不同编译器效果不一致
    MyClassNs::DailySuppily ds(mClock);
    MyClassNs::DailySuppily ds2(ds);
    cout<<"DailySuppily 组合类复制函数"<<ds.getDailySuppilyNums()<<endl;;
    cout<<"DailySuppily 组合类复制函数2="<<ds2.getDailySuppilyNums()<<endl;;
    
    MyClassNs::Clock mClock34(2,3,4);
    MyClassNs::Clock mClock35(2,3,4);
    // const MyClassNs::Clock mClock35(2,3,4);//表明是常对象
    
    cout<<"dist="<<distHour(mClock34,mClock35)<<endl;
    cout<<"point.cpp---------------------------"<<endl;
    // Point point(1,2);
    // cout<<"point.getX()="<<point.getX()<<endl;
    
}

void testSrand(){
    int i,j;
    
    // 设置种子
    srand( (unsigned)time( NULL ) );
    
    /* 生成 10 个随机数 */
    for( i = 0; i < 4; i++ )
    {
        // 生成实际的随机数
        j= rand();
        cout <<"随机数： " << j << endl;
    }
}
void testString(){
    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int  len ;
    
    // 复制 str1 到 str3
    strcpy( str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;
    
    // 连接 str1 和 str2
    strcat( str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;
    
    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;
}
void testTime(){
    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    
    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
    
    cout << "本地日期和时间：" << dt << endl;
    
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;
}

int main() {
    testClock();
    testSrand();
    testString();
    testTime();
    
    // Point point(3,4);
    // Point::showCount();
    
    cout << "Hello!" << endl;
    cout << "Welcome to C++!" << endl;
    //    cout << "Hello, World!" ;
    short a=1;
    // cin>>a;//用户输入a的值，相对于java Scanner
    // cout <<a++<< endl;
    cout <<"a="<<++a<< endl;
    cout <<sizeof(a)<<endl;//返回的是a在内存中所占用的字节数
    bool b1=a;
    cout <<b1<< endl;//返回的是1,可以将short转bool
    float f1=M_PI;
    int i1=int(f1);//c++显式风格装换数据类型
    // int i1=(int)f1;//c显式风格装换数据类型 这里只做介绍。
    cout <<i1<< endl;
    cout<<setw(5)<<setprecision(20)<<M_PI<<endl;
    
    cout<<"calArea="<<calArea(2)<<endl;
    cout<<"add="<<add(3,1,2)<<endl;
    
    getLeanYear();
    // checkInput();
    testEnum();
    return 0;
}

void getLeanYear(){
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

void checkInput(){
    int i=0,j=0,n;
    cout<<"please input some number, 0 exit"<<endl;
    cin>>n;
    while(n!=0){
        if(n>0){
            i++;
        }
        if(n<0){
            j++;
        }
        cin>>n;
    }
    cout << "i="<<i << "j="<<j << endl;
}

void testEnum(){
    enum WeekDay{SUN,MON,TUE=7};//初始值 0
    
    cout << "SUN="<<SUN << "TUE="<<TUE << endl;
}
