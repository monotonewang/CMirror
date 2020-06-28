//
//  tClassPoint2.cpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/28.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#include <stdio.h>
#include "tClassPoint.hpp"

double Point::getY(){
    return y;
}

double Point::getX(){
    return x;
}

void Point::setX(double x1){
    this->x=x1;
}

void Point::setY(double y1){
    this->y=y1;
}

Point& Point::addY(Point &p){
    this->y+=p.getY();
    return *this;
}
