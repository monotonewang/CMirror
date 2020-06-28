//
//  tClassPerson.hpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/27.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#ifndef tClassPerson_hpp
#define tClassPerson_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Person {
    public:
        int *mAge;
        int height;
        mutable string name;//常函数 声明 mutable可以修改
    private:
        string address;
    
    static int SC;//静态成员变量不属于类的空间
    public:
        //初始化列表初始化属性 调用Person p
        Person():height(10),name("sun"){
            cout<<"Person构造函数"<<endl;
        }
        Person(int height,string name):height(height),name(name){
            cout<<"Person构造函数"<<endl;
        }
        Person(int age){
            mAge=new int (age);
        }
        //深拷贝
        Person(const Person&p){
            cout<<"Person拷贝函数"<<endl;
    //        mAge=mAge;//这是编译器自己实现的浅拷贝
            mAge=new int(*p.mAge);//深拷贝 在堆区重新申请空间
        }
        ~Person(){
    //        if(mAge!=NULL){//浅拷贝 error for object 0x1: pointer being freed was not allocated
    //            delete mAge;
    //            mAge=NULL;
    //        }
        }
    
    
    public:
        void run() const;
    
        //定义全局友元函数 可以访问私有成员
        friend void goodBay(Person person);
        //运算符重载 调用 Person p3 = p1+p2;
        Person operator+(Person &p){
            Person temp;
            temp.height=this->height+p.height;
            return temp;
        };
        //重载左移运算符，直接输出某个对象
        //https://www.jb51.cc/c/113907.html
        friend ostream& operator<<(ostream &os, Person& p){
            cout <<"p height"<<p.height;
            return cout;
        }
    
};


#endif /* tClassPerson_hpp */
