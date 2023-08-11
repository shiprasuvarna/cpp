//4. Write a program which accept temperature in Fahrenheit and print it in centigrade. 
#include<iostream>
using namespace std;
main()
{
	int f,c;
	cout<<"Enter a temperature in farenheit: "<<endl;
	cin>>f;
	c =(f-32)*5/9;
	cout<<"The temperature in centigrade would be: "<<c;
}
