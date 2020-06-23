//
//  point.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/20.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tPoint.hpp"

void pointTest(){
    int *p=NULL;
//    *p=100;//excbadAccess，写入异常
//    int *p2=(int *)0x1100;//野指针 报错
//    cout << "pointTest p= "<<*p << endl;
    
    int a=20;
    int b=30;
    const int *p3=&a;//可以修改指向，不可以修改值
    p3=&b;
    cout << "pointTest p3= "<<*p3 << endl;
    int * const p4=&a;//不可以修改指向，可以修改值
    *p4=50;
    cout << "pointTest p4= "<<*p4 << endl;
    const int * const p5=&a;//不可以修改指向，不可以修改值
}

void pointSwap(long *a,long *b){
    long temp = *a;
    *a=*b;
    *b=temp;
    cout << "swap a(0) := "<<*a << endl;
    cout << "swap b(0) := "<<*b << endl;
}

//冒泡排序
void bubbleSort(){
    int arr[7]={4,3,10,7,8,2,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout << "bubbleSort length="<<length << endl;
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i< length;i++){
        cout << "bubbleSort-->arr("<<i<<") := "<<arr[i] << endl;
    }
}

int ga=10;
int gb=20;
const int gc=20;//全局常量

/*
 pointVariable-->a= 0x7ffeefbff3fc
 pointVariable-->b= 0x7ffeefbff3f8
 pointVariable-->ga= 0x100007180
 pointVariable-->gb= 0x100007184
 pointVariable-->sa= 0x100007190
 pointVariable-->sb= 0x100007188
 **/
void pointVariable(){
    int a=0;
    int b=10;
    const int c=10;//局部常量
    cout << "pointVariable-->a= "<<&a<< endl;
    cout << "pointVariable-->b= "<<&b<< endl;
    cout << "pointVariable-->c= "<<&c<< endl;
    
    cout << "pointVariable-->ga= "<<&ga<< endl;
    cout << "pointVariable-->gb= "<<&gb<< endl;
    cout << "pointVariable-->gc= "<<&gc<< endl;
    
    static int sa=0;
    static  int sb=10;
    const static  int sc=10;
    
    cout << "pointVariable-->sa= "<<&sa<< endl;
    cout << "pointVariable-->sb= "<<&sb<< endl;
    cout << "pointVariable-->sc= "<<&sc<< endl;
    
//    cout << "pointVariable-->字符串常量sting= "<<hex<<long(&("helloword"))<< endl;
    
    int *p=func(a);
    
    cout << "pointVariable-->p1= "<<*p<< endl;
    cout << "pointVariable-->p2= "<<*p<< endl;
}

int * func(int b){
    b=100;
    int a=10;//局部变量，存放在栈区
    return &a;//
}

void pointSwap2(long &a,long &b){
    long temp=a;
    a=b;
    b=temp;
}

//常量引用
void funConst2(int &v){
    //    int &f1=10; //error
    
    //等价于
    //int temp=10
    //const int &f=temp;
    const int &f=10;//只读，不可以修改
    v=1000;
    cout << "funConst-->p2= "<<v<< endl;
}

//常量引用
void funConst3(int const &v){
    //    int &f1=10; //error
    
    //等价于
    //int temp=10
    //const int &f=temp;
    const int &f=10;//只读，不可以修改
//    v=1000;//只读，不可以修改
    cout << "funConst3-->v= "<<v<< endl;
}
//常量指针
void funConst(int const *v){
//    int &f1=10; //error
    
    //等价于
    //int temp=10
    //const int &f=temp;
    const int &f=10;//只读，不可以修改
    
    cout << "funConst-->v= "<<v<< endl;
}
