//protected access specifier
//used only in inheritance, mostly in multiple but can also be used in single and multilevel
#include<iostream>
using namespace std;
class emp{
	protected:
		int salary;
};
class emp1: public emp{
	public:
		void setData(int s)
		{
			salary = s;
		}
		int getData()
		{
			return salary;
		}
};
main()
{
	emp1 e1;
	e1.setData(5000000000);
	e1.getData();
	cout<<"EMployee salary is "<<e1.getData();
}

