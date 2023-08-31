#include<iostream>
using namespace std;
main()
{
	enum Day{
		Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};
	Day d = Thursday;
	switch(d){
		case Sunday:
		cout<<"Day is Sunday";
		break;
		case Monday:
		cout<<"Day is Monday";
		break;
		case Tuesday:
		cout<<"Day is Tuesday";
		break;
		case Wednesday:
		cout<<"Day is Wednesday";
		break;
		case Thursday:
		cout<<"Day is Thursday";
		break;
		case Friday:
		cout<<"Day is Friday";
		break;
		case Saturday:
		cout<<"Day is Saturday";
		break;
		default:
		cout<<"Invalid";
		break;	
	}
}
