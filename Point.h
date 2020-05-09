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
