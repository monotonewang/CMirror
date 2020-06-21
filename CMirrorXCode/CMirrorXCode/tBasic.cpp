//
//  tBasic.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/21.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tBasic.hpp"

void tBasicInfo(){
    cout << "Hello!" << endl;
    cout << "Welcome to C++!" << endl;
    int *p = new int(1);//堆区数据
    cout << "*p=" <<(short)*p<< endl;
    cout << "*p=" <<(short)*p<< endl;
    cout << "&p=" <<&p<< endl;
    delete p;//释放内部
    cout << "*p=" <<(short)*p<< endl;
    cout << "&p=" <<&p<< endl;
    long a = 100;
    long c=200;
    long &b = a;
//    &b=c;//引用必须要初始化，一旦初始化，不可以改变指向。 error
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    b=16;
    cout << "after a=" << a << endl;
    cout << "after b=" << b << endl;
}
