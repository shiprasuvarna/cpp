//func overloading
#include<iostream>
using namespace std;
void funNum(float x, float y)
{
	cout<<"Decimal number "<<x<<" "<<y<<endl;
}
void funNum(int x, int y, int q)
{
	cout<<"Whole number "<<x<<" "<<y<<" "<<q<<endl;
}
void funNum(int x, int y, int q, int p)
{
	cout<<"Integer number "<<x<<" "<<y<<" "<<q<<" "<<p<<endl;
}
main()
{
	funNum(12.33, 13.34);
	funNum(123,23,12);
	funNum(1,23,4,5);
}
