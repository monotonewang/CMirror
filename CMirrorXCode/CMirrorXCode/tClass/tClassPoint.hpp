//
//  tClassPoint.hpp
//  CMirrorXCode
//
//  Created by fu qingwang on 2020/6/26.
//  Copyright © 2020 fu qingwang. All rights reserved.
//

#ifndef tClassPoint_hpp
#define tClassPoint_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

//这里将point类的声明单独提出来
class Point{
    
    public:
        Point(){
            cout<<"Point构造函数"<<endl;
        };
        Point(int x){//this 指针
            this->x=x;
            cout<<"Point有参数构造函数"<<endl;
        };
        ~Point(){
            cout<<"Point析构函数"<<endl;
        }
        Point(const Point &p){
           cout<<"Point拷贝函数"<<endl;
            x=p.x;
            y=p.y;
        }
    
    
    private:
        double x;
        double y;
    public:
        double getX();
        double getY();
        void setX(double x1);
        void setY(double y1);
        Point& addY(Point &p);
       
        
};

#endif /* tClassPoint_hpp */

