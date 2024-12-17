#include<iostream>
using namespace std;
class Cubic_column
{
private:double length;
	   double width;
	   double height;
public:void set_value()
{
	cin >> length >> width >> height;
}
	  double V()
	  {
		  return length * height * width;
	 }
	  void showV()
	  {
		  cout << V() << endl;
	  }
};
int main()
{
	Cubic_column c1;
	Cubic_column c2;
	Cubic_column c3;
	c1.set_value();
	c2.set_value();
	c3.set_value();
	c1.V();c2.V();c3.V();
	c1.showV(); c2.showV(); c3.showV();
	return 0;
}