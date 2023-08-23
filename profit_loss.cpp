//cost price and selling price of an item is taken by user input. write a program to determine whether the seller has made a profit or a loss. also find how much profit or loss he made
#include<iostream>
using namespace std;
main()
{
	int cp,sp,loss,profit;
	cout<<"Enter the cost price of an item "<<endl;
	cin>>cp;
	cout<<"Enter the selling price of an item "<<endl;
	cin>>sp;
	if(sp>cp)
	{
		cout<<"The seller has made a profit "<<endl;
		profit=sp-cp;
		cout<<"The seller made a profit of "<<profit<<"rs"<<endl;
	}
	else
	{
		cout<<"The seller has incurred a loss "<<endl;
		loss=cp-sp;
		cout<<"The seller has incurred a loss of "<<loss<<"rs"<<endl;
	}
}
