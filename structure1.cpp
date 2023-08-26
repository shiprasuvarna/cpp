//structure 
/* structures are a way to group several related variables into one place.
Each variable in the structure is known as a member of the structure
*/
#include<iostream>
using namespace std;
struct Car{
	string brand;
	string model;
	int year;
};
main()
{
	Car c1;
	c1.brand="BMW";
	c1.model="x5";
	c1.year=2007;
	cout<<"Car brand is : "<<c1.brand<<endl;
	cout<<"Car model is : "<<c1.model<<endl;
	cout<<"Launch year is : "<<c1.year<<endl;
}
