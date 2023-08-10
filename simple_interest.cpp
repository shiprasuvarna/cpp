//5. Write a program which accept principle, rate and time from user and print the simple interest.  
#include<iostream>
using namespace std;
main()
{
	int p,r,t,si;
	cout<<"Enter the principle: "<<endl;
	cin>>p;
	cout<<"Enter the rate: "<<endl;
	cin>>r;
	cout<<"Enter the time: "<<endl;
	cin>>t;
	si=(p*r*t)/100;
	cout<<"The simple interest would be: "<<si<<endl;
}
