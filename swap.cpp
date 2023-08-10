//7. Write a program to swap the values of two variables.  
#include<iostream>
using namespace std;
main()
{
	int num1, num2, temp;
	cout<<"Enter the two numbers that you want to swap: "<<endl;
	cin>>num1>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"After swapping:"<<endl<<"first number becomes :"<<num1<<endl<<"Second number becomes :"<<num2;
}
