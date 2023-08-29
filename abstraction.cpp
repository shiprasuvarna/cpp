//Abstraction
#include<iostream>
using namespace std;
class Abs{
	private:
		int a, b;
	public:
		void setData(int x, int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"Value of a: "<<a<<endl;
			cout<<"Value of b: "<<b<<endl;
		}
};
main()
{
	Abs a1;
	a1.setData(10,20);
	a1.display();
}
