//mulitple inheritance
//A class can also be derived from more than one base class, using a comma separated list
#include<iostream>
using namespace std;
class A{
	public:
		void methodclassA1()
		{
			cout<<"This is class A method 1"<<endl;
		}
		void methodclassA2()
		{
			cout<<"This is class A method 2"<<endl;
		}
};
class B{
	public:
		void methodclassB1()
		{
			cout<<"This is class B method 1"<<endl;
		}
		void methodclassB2()
		{
			cout<<"This is class B method 2"<<endl;
		}
};
class C: public B, public A{
	public:
		void methodclassC1()
		{
			cout<<"This is class C method 1"<<endl;
		}
		void methodclassC2()
		{
			cout<<"This is class C method 2"<<endl;
		}
};
main()
{
	C c1;
	c1.methodclassA1();
	c1.methodclassA2();
	c1.methodclassB1();
	c1.methodclassB2();
	c1.methodclassC1();
	c1.methodclassC2();
}
