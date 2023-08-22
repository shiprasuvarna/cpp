//friend function
//protected and private data of a class can be accessed using this function
#include<iostream>
using namespace std;
class Box;
{
	private:
		int length;
	public:
	    friend int printLength(Box b); //friend function				
};
int printLength(Box b)
{
	b.length = 10;
	return b.length;
}
main()
{
	Box b;
	cout<<"Length of box : "<<printLength(b)<<endl;
}
