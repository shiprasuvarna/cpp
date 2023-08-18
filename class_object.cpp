//class object 
/*
   class is very big and it contains many featuers and funtions
   so to extract some parts of class we use objects
*/
#include<iostream>
using namespace std;
class Test{         //creates class called Test 
	public:         //access specifier
	void myFunc1()  //creates function called myFunc1()
	{
		cout<<"This is my function 1"<<endl;
	}
	void myFunc2()  //creates function called myFunc2()
	{
		cout<<"This is my function 2"<<endl;
	}
};
main()
{
	Test t1;        //creates object called t1
	t1.myFunc1();
	t1.myFunc2();
}
