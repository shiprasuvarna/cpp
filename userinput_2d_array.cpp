//user input 2d array
#include<iostream>
using namespace std;
main()
{
	int sum[3][3];
	cout<<"Input values for the 3 by 3 matrix"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>sum[i][j];
		}
	}
	cout<<"Output for the 3 by 3 matrix is "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
}
