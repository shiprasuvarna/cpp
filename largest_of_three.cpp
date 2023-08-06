//2. Write a program which input three numbers and display the largest.  
#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	if(a==b && b==c)
	{
		cout<<"The numbers are equal"<<endl;
	}
	else if(a>b && a>c)
	{
		cout<<"The largest number is: "<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"The largest number is: "<<b;
	}
	else
	{
		cout<<"The largest number is:"<<c;
	}
}
