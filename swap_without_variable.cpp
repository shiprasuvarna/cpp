//Q6 prog to swap two numbers without a third variable
//(multiply and divide) method a=a*b b=a/b a=a/b
/*
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter two numbers you want to swap: "<<endl;
	cin>>a>>b;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"After swapping: "<<endl<<"first number becomes: "<<a<<endl<<"secod number becomes: "<<b<<endl;
}
*/


//swapping using (add subtract subtract method) a=a+b b=a-b a=a-b
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter two numbers you want to swap: "<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swapping: "<<endl<<"first number becomes: "<<a<<endl<<"secod number becomes: "<<b<<endl;
}
