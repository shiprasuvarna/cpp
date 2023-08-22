//overloading function   -  Multiple functions can have the same name with different arguements
#include<iostream>
using namespace std;
int add(int x, int y)
{ 
    return x+y;
}
double add(double x, double y)
{
	return x+y;
}
main()
{
	cout<<add(19,2003)<<endl;
	cout<<add(19,23.19)<<endl;
} 
