//
//  tClass.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/21.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tClass.hpp"

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



//友元函数实现定义在类外面
int distHour(MyClassNs::Clock &c1,MyClassNs::Clock &c2){
    int hour1=c1.getHour();
    int hour2=c2.getHour();
    return static_cast<int>(hour1-hour2);
}


void tClassBasic(){
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
