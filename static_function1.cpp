//static function
#include<iostream>
using namespace std;
class Test{
	static int num;
	public:
		static int func()
		{
			return num;
		}
};
int Test :: num=10;
main()
{
	Test t1;
	t1.func();
	cout<<t1.func()<<endl;
}
