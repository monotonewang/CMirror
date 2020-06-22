//
//  testStruct.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/21.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tStruct.hpp"

struct  People {
    string firstname;
    int arr[2];
};

struct Student {
    string name;
    int age;
    int score;
    //        int arr[2];
};

//值传递
void testStructPrint(struct Student s1){
    cout << "testStructPrint-->arr(s1.name) := "<<s1.name <<"s1.age="<<s1.age<<"s1.score="<<s1.score<<endl;
}

//地址传递
void testStructPrintPoint(struct Student *s1){
    cout << "testStructPrintPoint-->arr(s1.name) := "<<s1->name <<"s1.age="<<s1->age<<"s1.score="<<s1->score<<endl;
}
//结构体
void testStructStudent(){
    struct Student s1;
    s1.name="小米";
    s1.age=1;
    s1.score=10;
    
    testStructPrint(s1);
    testStructPrintPoint(&s1);
    //结构体指针
    struct Student *p=&s1;
    
    cout << "testStructStudent-->p= "<<p <<"--p="<<(*p).name<<"name="<<p->name<<endl;
    
    struct Student s1Array[2]={//结构体数组
        {"张三",1,2},
        {"李四",1,2}
    };
    for(int i=0;i<2;i++){
        cout << "testStructStudent-->s1Array(s1.name) := "<<s1Array[i].name <<"<--s1Array[i].age="<<s1Array[i].age<<"--s1Array.score="<<s1Array[i].score<<endl;
    }
    
//    cout << "testStructStudent-->arr(s1.name) := "<<s1.name <<"s1.age="<<s1.age<<"s1.score="<<s1.score<<endl;
    const struct  People p1={"王五",{1,2}};//const无法修改值
//    p1.firstname="李四";
    cout << "testStruct People->arr(p1.firstname) :="
    <<p1.firstname <<"p1.arr="<<p1.arr[0]<<endl;
}

//结构体嵌套
void testStructNest(){
    struct Student {
        string name;
        int age;
    };
    struct Teacher {
        int ide;
        string name;
        int age;
        struct Student stu;
    };
    struct Student s1;
    s1.name="小米";
    s1.age=1;

    struct Teacher t1;
    t1.name="黄老师";
    t1.age=48;
    t1.stu=s1;
    cout << "testStructNest-->arr(t1.name) :="<<t1.name <<"t1.age="<<t1.age<<"t1.stu的name="<<t1.stu.name<<endl;
}

