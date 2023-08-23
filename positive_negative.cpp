//9. Write a program to check whether the given number is positive or negative
#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter a number: "<<endl;
	cin>>a;
	if(a==0)
	{
		cout<<"You have entered zero"<<endl;
	}
	else if(a>0)
	{
		cout<<"The number is positive"<<endl;
	}
	else
	{
		cout<<"The number is negative"<<endl;
	}
}
