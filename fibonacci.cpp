//Q21 fbonacci series
/*
#include<iostream>
using namespace std;
main()
{
	int i,n,n1=0,n2=1,n3;
	cout<<"How long do you want the series to be? "<<endl;
	cin>>n;
	cout<<n1<<endl;
	cout<<n2<<endl;
	for(i=3; i<=n; i++)
	{
		n3=n1+n2;
		cout<<n3<<endl;
		n1=n2;
		n2=n3;
	}
}
*/


//using while loop
/*
#include<iostream>
using namespace std;
main()
{
	int i=1,n,n1=0,n2=1,n3;
	cout<<"How long do you want the series to be? "<<endl;
	cin>>n;
	cout<<n1<<endl;
	cout<<n2<<endl;
	while(i<=n)
	{
		n3=n1+n2;
		cout<<n3<<endl;
		n1=n2;
		n2=n3;
		i++;
	}
}
*/


//do while loop
#include<iostream>
using namespace std;
main()
{
	int i=1,n,n1=0,n2=1,n3;
    	cout<<"How long do you want the series to be? "<<endl;
	    cin>>n;
	    cout<<n1<<endl;
	    cout<<n2<<endl;
	    do{
	    n3=n1+n2;
		cout<<n3<<endl;
		n1=n2;
		n2=n3;
		i++;
	}while(i<=n);
}
