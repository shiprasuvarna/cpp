//exception
#include<iostream>
using namespace std;
double zeroDivision(int x, int y){
	if(y==0)
	{
		throw "Division by zero";
	}
	return x/y;
};
main()
{
	int a = 10;
	int b = 0;
	double c = 0;
	try 
	{
		c = zeroDivision(a,b);
		cout<<c<<endl;
	}
	catch(const char * msg)
	{
		cout<<msg<<endl;
	}
}

