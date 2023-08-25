//polymorphism
//polymorphism means "many forms" and it occurs when we have many classes that are related to each other by inheritance
#include<iostream>
using namespace std;
class computerGen1{
	public:
		void configRAM()
		{
			cout<<"This is first GEn RAM"<<endl;
		}
};
class computerGen2: public computerGen1{
	public:
		void configRAM()
		{
			cout<<"This is second GEn RAM"<<endl;
		}
};
class computerGen3: public computerGen2{
	public:
		void configRAM()
		{
			cout<<"This is third GEn RAM"<<endl;
		}
};
class computerGen4: public computerGen3{
	public:
		void configRAM()
		{
			cout<<"This is fourth GEn RAM"<<endl;
		}
};
class computerGen5: public computerGen4{
	public:
		void configRAM()
		{
			cout<<"This is fifth GEn RAM"<<endl;
		}
};
main()
{
	computerGen5 c1;
	c1.configRAM();
	computerGen4 g4;
	g4.configRAM();
}
