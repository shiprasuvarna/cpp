//prog that takes a number as input and print its table
//using for lop
/*
#include<iostream>
using namespace std;
main()
{
	int i,num, mul=1;
	cout<<"Enter the number whose table you want to print: "<<endl;
	cin>>num;
	for(i=1; i<=10; i++)
	{
		mul=num*i;
		cout<<num<<"x"<<i<<"="<<mul<<endl;
	}
}
*/


//using while loop
/*
#include<iostream>
using namespace std;
main()
{
	int i=1, mul=1, num;
	cout<<"Enter the number whose table you want to print: "<<endl;
	cin>>num;
	while(i<=10)
	{
		mul=num*i;
		cout<<num<<"x"<<i<<"="<<mul<<endl;
		i++;
	}
}
*/


//using do while loop
#include<iostream>
using namespace std;
main()
{
	int i=1, mul=1, num;
	cout<<"Enter the number whose table you want to print: "<<endl;
	cin>>num;
	do
	{
		mul=num*i;
		cout<<num<<"x"<<i<<"="<<mul<<endl;
		i++;
	}while(i<=10);
}
