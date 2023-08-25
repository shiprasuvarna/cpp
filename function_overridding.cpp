//function overridding
#include<iostream>
using namespace std;
class Test{
	public:
		myFun(string n)
		{
			cout<<"This is my Function class"<<n<<endl;
		}
};
class Demo: public Test
{
	public:
		myFun(string n)
		{
			cout<<"This is my Function class"<<n<<endl;
		}
};
main()
{
	Test t1;
	t1.myFun("Shipra");
	Demo d1;
	d1.myFun("Suvarna");
}
