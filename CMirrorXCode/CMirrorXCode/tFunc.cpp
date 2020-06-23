//
//  tFunc.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/23.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tFunc.hpp"

void tFuncDefault(int a=20,int b){
     cout << "tFuncDefault a+b=" <<a+b<< endl;
};

//函数占用
//函数中无法找到第二个参数
void tFuncPlace(int a,int){
    cout << "tFuncPlace a="<<a<< endl;
};
