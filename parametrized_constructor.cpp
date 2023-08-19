//parametrized constructor
#include<iostream>
using namespace std;
class Employee{
	public:
		int emp_id;
		string emp_name;
		int emp_salary;
		Employee(int id, string name, int salary)  //creating a constructor
		{
		emp_id=id;
		emp_name=name;
		emp_salary=salary;	
		}
};
main()
{
	Employee e1(111,"Shipra Suvarna", 5000000);
	cout<<e1.emp_id<<" "<<e1.emp_name<<" "<<e1.emp_salary<<endl;
	Employee e2(133, "Shawn Mendes", 4000000);
	cout<<e2.emp_id<<" "<<e2.emp_name<<" "<<e2.emp_salary<<endl;
}
