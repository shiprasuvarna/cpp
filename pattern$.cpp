//Q4 print pattern 
/*
$
$$
$$$
$$$$
$$$$$
*/
//for loop
/*
#include<iostream>
using namespace std;
main()
{
	int i=1, j=1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"$";
		}
		cout<<endl;
	}
}
*/

//while loop
#include<iostream>
using namespace std;
main()
{
	int i=1, j=1;
	while(i<=5)
	{
			cout<<"$";
		while(j<=i)
		{
		cout<<endl;
			i++;
		}
		
		j++;
	}
}

