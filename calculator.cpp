#include<iostream>
using namespace std;
main()
{
	int a, b, choice, result;
	cout<<"Enter the two numbers: "<<endl;
	cin>>a>>b;
	cout<<"Select the number next to the sign you want to choose: \n 1.+ \n 2.- \n 3.* \n 4./ \n 5.%"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			result=a+b;
			cout<<"You have chosen addition"<<endl<<a<<"+"<<b<<"="<<result;
			break;

		case 2:
			result=a-b;
			cout<<"You have chosen subtraction"<<endl<<a<<"-"<<b<<"="<<result;
			break;

		case 3:
			result=a*b;
			cout<<"You have chosen multiplication"<<endl<<a<<"*"<<b<<"="<<result;
			break;

		case 4:
			result=a/b;
			cout<<"You have chosen division"<<endl<<a<<"/"<<b<<"="<<result;
			break;

		case 5:
			result=a%b;
			cout<<"You have chosen modulus"<<endl<<a<<"%"<<b<<"="<<result;
			break;
		
		default:
			cout<<"Invalid sign";

	}
}
