//single inheritance
/*  derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
The inheritance in which a single derived class is inherited from a single base class
 is known as the Single Inheritance. */
#include<iostream>
using namespace std;
class A   //parent class/base class
{
	public:
		void methodA1()
		{
			cout<<"This is class A method 1\n";
		}
		void methodA2()
		{
			cout<<"This is class A method 2\n";
		}
};     
class B: public A  //child class/derived class , : represents that class B is inheriting from class A
{
	public:
		void methodB1()
		{
			cout<<"This is class B method 1\n";
		}
		void methodB2()
		{
			cout<<"This is class B method 2\n";
		}
	};
	main()
	{
		B b1;
		b1.methodA1();   //calls method
		b1.methodA2();
		b1.methodB1();
		b1.methodB2();
	}
