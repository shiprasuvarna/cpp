//user input 1d array
#include<iostream>
using namespace std;
main()
{
	int num[5];
	string name[5];
	cout<<"Enter your roll number and name: "<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>num[i];
		cin>>name[i];
	}
	cout<<"Displaying roll number and name"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<num[i]<<" ";
		cout<<name[i]<<endl;
	}
}
