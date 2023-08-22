//string function
#include<iostream>
using namespace std;
main()
{
	string str1, str2;
	cout<<"Enter string 1: "<<endl;
	cin>>str1;
	cout<<"Enter string 2: "<<endl;
	cin>>str2;
	int t=str1.compare(str2);        //from.compare(to) , returns equal only if both the strings are same 
	if(t==0)
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		cout<<"Not equal"<<endl;
	}
}
