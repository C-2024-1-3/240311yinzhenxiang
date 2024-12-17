#include<iostream>
using namespace std;
class Point
{
private:int x;
	   int y;
public:Point()
{
	this->x = 60;
	this->y = 80;
}
	  void setPoint(int i, int j)
	  {
		  x = x + i;
		  y = y + j;
	  }
	  void display()
	  {
		  cout << "(" << x << "," << y << ")" << endl;
	  }
};
int main()
{
	Point p1;
	p1.setPoint(20, 30);
	p1.display();
	return 0;
}