//Declare 3 values privately and add them
#include<iostream>
using namespace std;
class Abs{
    private:
    int a, b, c;
    public:
    void setData(int x, int y, int z)
    {
    	a = x;
    	b = y;
    	c = z;
	}
	void display()
	{
		cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl<<"Value of c: "<<c<<endl;
		cout<<"Sum of a, b, c: "<<a + b + c<<endl;
	}
};
main()
{
	Abs a1;
	a1.setData(12,20,34);
	a1.display();
}
