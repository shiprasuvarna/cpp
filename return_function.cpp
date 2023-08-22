//return function
#include<iostream>
using namespace std;
int add(int a, int b) //since return function uses numbers so we use int , float etc instead of void while creating the function
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float div(float a, float b)
{
	return a/b;
}
main()
{
	cout<<"The sum is: "<<add(19,6)<<endl;
    cout<<"The subtarction is: "<<sub(19,6)<<endl;
	cout<<"The product is: "<<mul(19,6)<<endl;
	cout<<"The qoutient is: "<<div(19,6)<<endl;	
}
