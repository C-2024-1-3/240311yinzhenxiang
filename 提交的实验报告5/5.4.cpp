#include<iostream>
using namespace std;
class Student
{
public:int ID;
	   int Grade;
Student(int ID, int Grade)
{
	this->ID = ID;
	this->Grade = Grade;
}
};
int find_max(Student students[])
{
	int max;
	for (int i = 0; i <= 4; i++)
	{
		if (i == 0)
		{
			max = students[0].Grade;
		}
		if (students[i].Grade > max)
		{
			max = students[i].Grade;
		}
	}
	return max;
}
int main()
{
	Student students[5] = { {240001,90},{240002,67 },{240003,43},{240004,89},{240005,96} };
	cout << find_max(students)<<endl;
	for (int i = 0; i <= 4; i++)
	{
		if (students[i].Grade == find_max(students))
		{
			cout << students[i].ID << endl;
		}
	}
	return 0;
}