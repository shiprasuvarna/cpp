//Choose a no from 1 to 7 and get the corresponding weekday
#include<iostream>
using namespace std;
main()
{
	int choice;
	cout<<"Enter a number from 1 to 7"<<endl;
	cout<<"1.Sunday \n 2.Monday \n 3.Tuesday \n 4.Wednesday \n 5.Thursday \n 6.Friday \n 7.Saturday"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"You have chosen Sunday";
			break;
		
		case 2:
			cout<<"You have chosen Monday";
			break;
		
		case 3:
			cout<<"You have chosen Tuesday";
			break;
		
		case 4:
			cout<<"You have chosen Wednesday";
			break;
		
		case 5:
			cout<<"You have chosen Thursday";
			break;
		
		case 6:
			cout<<"You have chosen Friday";
			break;
		
		case 7:
			cout<<"You have chosen Saturday";
			break;
		
		default:
			cout<<"Invalid number";
	}
}
