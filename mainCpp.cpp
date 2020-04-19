
////
//// Created by wang on 2018/7/6.
////
//
#include <iostream>
#include <math.h>       /* cos */
#include <iomanip>

using namespace std;

void getLeanYear();
void checkInput();
void testEnum();

//start clock
class Clock{
    //下面是内联函数的隐式声明
    public:
        Clock ();//系统默认生成构造函数
        Clock (int newH=0,int newM=0,int newS=0);
        void setTime(int newH=0,int newM=0,int newS=0);
        void showTime();
        int getHour();
        Clock(Clock &c);//复制构造函数
        // ~Clock();//空析构函数 类似java finalize
    private:
        int hour,minute,second;
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
}
//Clock成员函数的实现
void Clock::setTime(int newH,int newM,int newS){
    hour=newH;
    minute=newM;
    second=newS;
}
void getClockHour(Clock c){
        cout << "c hour value"<<c.getHour() << endl;
}
Clock getClock(){
    Clock c(1,3,4);
    return c;
}
int Clock::getHour(){
    return hour;
}
inline void Clock::showTime(){
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
void testClock(){
    Clock mClock(2,3,4);
    Clock mClock2(mClock);
    getClockHour(mClock2);//对象2作为形参，第二次调用复制函数
    mClock2=getClock();
    cout<<mClock2.getHour()<<endl;//函数返回值是类对象。函数返回，调用复制构造函数 注 不同编译器效果不一致
    mClock2.showTime();
    // mClock.setTime();
    mClock.showTime();
    cout<<"mClock.getHour()"<<mClock.getHour()<<endl;//函数返回值是类对象。函数返回，调用复制构造函数 注 不同编译器效果不一致
    DailySuppily ds(mClock);
    DailySuppily ds2(ds);
    cout<<"DailySuppily 组合类复制函数"<<ds.getDailySuppilyNums()<<endl;;
    cout<<"DailySuppily 组合类复制函数2="<<ds2.getDailySuppilyNums()<<endl;;
}


int main() {
    testClock();
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
