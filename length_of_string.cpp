//inbuilt length function
#include<iostream>
using namespace std;
main()
{
	string str;
	cout<<"Enter a string"<<endl;
	cin>>str;
	int len=str.length();       //the .length() function automatically calculates the length of the string 
	cout<<"The length of the string is "<<len<<endl;
}
