//function overloading 
#include<iostream>
using namespace std;
void sumNum(int A, int B)
{
	cout<<endl<<"Sum is : "<<A + B;
}
void sumNum(int A, int B, int C)
{
	cout<<endl<<"Sum is : "<<A + B + C;
}
void sumNum(int A, int B, int C, int D)
{
	cout<<endl<<"Sum is : "<<A + B + C + D;
}
main()
{
	sumNum(1,2);
	sumNum(1,2,3);
	sumNum(1,2,3,4);
}
