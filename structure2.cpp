//structure 
//user defined
#include<iostream>
using namespace std;
struct Employee{
	char name[50];
	int age;
	int salary;
};
main()
{
	Employee e1;
	cout<<"Enter your name : "<<endl;
	cin>>e1.name;
	cout<<"Enter your age : "<<endl;
	cin>>e1.age;
	cout<<"Enter your salary : "<<endl;
	cin>>e1.salary;
	cout<<"Displaying your data "<<endl;
	cout<<"Name : "<<e1.name<<endl;
	cout<<"Age : "<<e1.age<<endl;
	cout<<"Salary : "<<e1.salary<<endl;
}
