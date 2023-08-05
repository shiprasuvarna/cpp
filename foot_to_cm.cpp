//10. Write a program that takes length as input in feet and inches. 
//The program should then convert the lengths in centimeters and display it on screen.
// Assume that the given lengths in feet and inches are integers.
#include<iostream>
using namespace std;
main()
{
	int f,cm;
	cout<<"Enter a length in foot and inches: "<<endl;
	cin>>f;
	cm=f*30.48;
	cout<<"The length in centimeters would be: "<<cm<<endl;
}
