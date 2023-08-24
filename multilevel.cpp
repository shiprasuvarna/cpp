//Multilevel inheritance
/*  Multilevel Inheritance in C++ is the process of deriving a class from another derived class.
When one class inherits another class it is further inherited by another class.
It is known as multi-level inheritance.  */
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
class C: public B, public A   //child class
{
	public:
		void methodC1()
		{
			cout<<"This is class C method 1 \n";
		}
		void methodC2()
		{
			cout<<"This is class C method 2 \n";
		}
	};
main()
{
	C c1;
	c1.methodA1();
	c1.methodA2();
    c1.methodB1();
	c1.methodB2();
	c1.methodC1();
	c1.methodC2();
	}
