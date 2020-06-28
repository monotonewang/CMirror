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

// 版权声明：本文为CSDN博主「欧阳鹏」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/ouyang_peng/java/article/details/51803181

#include <iostream>

#include <iomanip>
#include "tArray.hpp"
#include "tPoint.hpp"
#include "tStruct.hpp"
#include "tClass.hpp"
#include "tBasic.hpp"
#include "tFunc.hpp"

using namespace std;

bool isOutPut=false;

int main() {
    if(isOutPut){
        // Point point(3,4);
        // Point::showCount();
        // checkInput();
        testEnum();
        getLeanYear();
    
        testSrand();
        testString();
        testTime();
        arrayPrint();
        arrayFindMax();
        arraySwap();
        pointTest();
        //    swap1(20,10);
        long a1=20;
        long b2=10;
        pointSwap(&a1,&b2);
        bubbleSort();
        testStructStudent();
        testStructNest();
        cout << "swap01 after a(0) := "<<a1 << endl;
        cout << "swap01 after b(0) := "<<b2 << endl;
    long a3=20;
    long b3=10;
    
    cout << "pointSwap2 before a3= "<<a3 << endl;
    cout << "pointSwap2 before b3= "<<b3 << endl;
    
    
    pointSwap2(a3,b3);
    cout << "pointSwap2 after a3= "<<a3 << endl;
    cout << "pointSwap2 after b3= "<<b3 << endl;
    
    }
//    int a=10;
//    funConst2(a);
//    funConst3(a);
    //函数默认参数
//    tFuncDefault(15,21);
//    tFuncDefault(15);
//    tFuncPlace(10,20);
    getCircleGirth();
//    arrayTwoDimension();
//    tClassBasic();
//    pointVariable();
//    tBasicInfo();

    return 0;
}



