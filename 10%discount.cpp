//calculate the total expense. Quantity and price are user input and a discount of 10% is given if the expense is more than 5000
#include<iostream>
using namespace std;
main()
{
	int total, price, quantity;
	cout<<"Enter the price of product: "<<endl;
	cin>>price;
	cout<<"Enter the quantity: "<<endl;
	cin>>quantity;
	total=price*quantity;
	cout<<"Your total cost is: "<<total<<endl;
	if(total>5000)
	{
		cout<<"Since your total is more than 5000rs you are getting a 10% discount"<<endl;
		total=total-(total/100)*10;
		cout<<"Your total expense after the discount is "<<total;
		
	}
}
