//
//  tFunc.hpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/23.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#ifndef tFunc_hpp
#define tFunc_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//defalut value 默认参数
//如果某个参数有默认值。后面就必须都带上
//实现和声明只有一个有默认值。
//声明有了默认参数，实现就没有默认参数了
void tFuncDefault(int a,int b=10);

//函数占用
//函数中无法找到第二个参数
void tFuncPlace(int a,int);

//函数占用第二种写法
void tFuncPlace2(int a,int=10);

//函数重载
void tFuncPlace(int a);


#endif /* tFunc_hpp */
