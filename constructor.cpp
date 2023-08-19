//constructor
#include<iostream>
using namespace std;
class Employee{
	public: 
	Employee()   //creating a constructor - when name of the class and function is same constructor is created
	//we dont add int or void before creating a constructor
	{
		cout<<"This is a constructor"<<endl;
	}
};
main()
{
	Employee e1;
/* A constructor is created by giving the same name to the class and the function.
while creating a constructor we dont need to use void we can directly write the function name that is then 
considered as a constructor */
}
