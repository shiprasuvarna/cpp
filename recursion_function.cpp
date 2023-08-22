//recursion function
#include<iostream>
using namespace std;
int fact(int a)
{
	if(a>=1)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
main()
{
	int res=fact(5);
	cout<<res;
}
