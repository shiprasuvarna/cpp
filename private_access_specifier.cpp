//Encapsulation - private access specifier
/*  The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
 To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
 If you want others to read or modify the value of a private member, 
 you can provide public get and set methods.
To access a private attribute, use public "get" and "set" methods: */
#include<iostream>
using namespace std;
class Employee{
	public:
		int emp_id;
		string emp_name;
	private:
		int emp_salary;
	public:
		void setSalary(int s)
		{
			salary = s;
		}
		int getSalary()
		{
			return salary;
		}
		void display()   //we can use any other function instead of display
		{
			cout<<"Employee id is "<<emp_id<<endl;
			cout<<"Employee name is "<<emp_name<<endl;
			cout<<"Employee salary is "<<salary<<endl;
		}
};
main()
{
	Employee e1;
	e1.setSalary(5000000);
	e1.emp_id=111;
	e1.emp_id_name="Shipra Suvarna";
	e1.display();
}

