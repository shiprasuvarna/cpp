//star 
#include<iostream>
using namespace std;
main()
{
	int i , j , k;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i; j++)
		{
		cout<<" ";
	}
		for(k=1; k<=5; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
