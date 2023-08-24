//continue statement
#include<iostream>
using namespace std;
main()
{
	int i;
	for(i=1; i<=10; i++)
	{
		if(i==4)
		{
			continue;      //the continue statement will skip 4 and print from 1 to 10
		}
		cout<<i<<endl;
	}
}
