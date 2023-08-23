//input the ages of rita,sita and gita by user and determine the youngest of the three
#include<iostream>
using namespace std;
main()
{
	int rita,sita,gita;
	cout<<"Enter Rita's age "<<endl;
	cin>>rita;
	cout<<"Enter Sita's age "<<endl;
	cin>>sita;
	cout<<"Enter Gita's age "<<endl;
    cin>>gita;
    if(sita<gita && sita<rita)
    {
    	cout<<"Sita is the youngest"<<endl;
	}
	else if(rita<sita && rita<gita)
	{
		cout<<"Rita is the youngest"<<endl;
	}
	else
	{
		cout<<"Gita is the youngest"<<endl;
	}
}
