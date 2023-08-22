//pass by reference
#include<iostream>
using namespace std;
void  swapValue(int &a, int &b)  //we use the & sign for pass by reference
{ 
int t;
t=a;
a=b;
b=t;
}
main()
{
	int firstnum=19;
	int secondnum=06;
	cout<<"The first number before swapping is: "<<firstnum<<endl<<"The second number before swapping is: "<<secondnum<<endl;
	swapValue(firstnum,secondnum);
	cout<<"The first number after swapping is: "<<firstnum<<endl<<"The second number after swapping is: "<<secondnum<<endl;
}
