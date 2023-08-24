#include<iostream>
using namespace std;
main()
{
	int i=1, j=1, num=1;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; ++j)
		{
			cout<<num++;
		}
		cout<<endl;
	}
}
