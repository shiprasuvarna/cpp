//prog to check whether a triangle is valid or not when three angles are entered by the user. A triangle is valid if sum of all three angles is 180
#include<iostream>
using namespace std;
main()
{
	int a,b,c,total;
	cout<<"Enter the three angles of the triangle"<<endl;
	cin>>a>>b>>c;
	total=a+b+c;
	if(total==180)
	{
		cout<<"The triangle is valid"<<endl;
	}
	else
	{
		cout<<"The triangle is not valid"<<endl;
	}
}
