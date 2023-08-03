#include<iostream>
using namespace std;
main()
{
	int choice;
	cout<<"Welcome to our Restaurant"<<endl;
	cout<<"1.Noodles \n 2.Dosa \n 3.Sandwich \n 4.Icrecream \n 5.Pizza"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: 
		cout<<"Your noodles are ready and the price is 100Rs";
		break;
	
		case 2: 
		cout<<"Your Dosa is ready and the price is 50Rs";
		break;
	
		case 3: 
		cout<<"Your Sandwich is ready and the price is 35Rs";
		break;
	
		case 4: 
		cout<<"Your Icecream is ready and the price is 30Rs";
		break;
	
		case 5: 
		cout<<"Your Pizza is ready and the price is 120Rs";
		break;		
		
		default:
		cout<<"Invalid choice";
	}
}
