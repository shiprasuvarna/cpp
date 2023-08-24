//Q2 prog to print sum of first 10 natural numbers 
//for loop
/*
#include<iostream>
using namespace std;
main()
{
	int i, sum=0;
	for(i=1; i<=10; i++)
	{
		sum=sum+i;
		cout<<i<<endl;
	}
	cout<<"Total is: "<<sum;
}
*/



//while loop
/*
#include<iostream>
using namespace std;
main()
{
	int i=1, sum=0;
	while(i<=10)
	{
		sum=sum+i;
		cout<<i<<endl;
		i++;
	}
	cout<<"Total is: "<<sum;
}
*/


//do while loop
/*
#include<iostream>
using namespace std;
main()
{
	int i=1, sum=0;
	do{
	    sum=sum+i;
		cout<<i<<endl;
		i++;
	}while(i<=10);
	cout<<"total is: "<<sum;	
}
*/	

//do while loop user input
#include<iostream>
using namespace std;
main()
{
	int i=1, sum=0,num;
	cout<<"Enter a no: "<<endl;
	cin>>num;
	do{
	    sum=sum+i;
		cout<<i<<endl;
		i++;
	}while(i<=num);
	cout<<"total is: "<<sum;	
}

