//
#include <iostream>
#include <math.h>       /* cos */
#include <iomanip>
// #include "Point.h"

using namespace std;

class Point
{
private:
  /* data */
  int x,y;
  static int count;
public:
  Point(/* args */);
  Point(int x,int y):x(x),y(y){};
  static void showCount();
  int getX(){
    return x;
  }

  // ~Point(
  // ){
  //   count--;
  // };
};

Point::Point(/* args */)
{
}

// Point::~Point()
// {
// }

int Point::count=0;

void Point::showCount(){
  cout<<"Point -->showCount="<<count<<endl;
}