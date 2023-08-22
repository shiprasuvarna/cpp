//swap function
#include<iostream>
using namespace std;
main()
{
	string str1,str2;
	cout<<"Enter two strings"<<endl;
	cin>>str1>>str2;
	str1.swap(str2);     //swaps string1 with string2
	cout<<"After swapping string 1 becomes: "<<str1<<endl;
	cout<<"AFter swapping string 2 becomes: "<<str2<<endl;

}
