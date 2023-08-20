//exception
#include<iostream>
using namespace std;
main()
{
	int a = 10;
	int b = 0;
	try 
	{
		if(b==0)
		{
			throw 0;
		}
		cout<<a/b<<endl;
	}
	catch(int n)
	{
		cout<<" B is zero";
	}
}
