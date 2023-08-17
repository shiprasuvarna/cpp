//break statement
#include<iostream>
using namespace std;
main()
{
	int i;
	for(i=1; i<=10; i++)
	{
		cout<<i<<endl;
		if(i==5)
		{
			break;      //the break statement will break the loop and only print till 5
		}
	}
}
