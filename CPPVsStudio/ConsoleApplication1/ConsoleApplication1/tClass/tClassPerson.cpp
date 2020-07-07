//
//  tClassPerson.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/27.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include "tClassPerson.hpp"

void Person::run() const{
    this->name="lili";
    cout<<"tClassPerson.hpp run"<<endl;
}


////左移
//friend ostream& operator<<(ostream &cout,Person &p){
//    cout <<"p height"<<p.height;
//    return cout;
//}
