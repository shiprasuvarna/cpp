//2 dimensional Array
#include<iostream>
using namespace std;
main()
{
	int m[2][2]={{1,2},{3,4}};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
