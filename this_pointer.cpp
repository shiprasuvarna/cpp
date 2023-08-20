//This
#include<iostream>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		Person(string name, int age)
		{
			this -> name = name;
			this -> age = age;
		}
		void setName(string name)
		{
			this -> name=name;
		}
		string getName()
		{
			return name;
		}
		void setAge(int age)
		{
			this -> age=age;
		}
		int getAge()
		{
			return age;
		}
};
main()
{
	Person p1("Shipra",20);
	p1.setName("Shipra");
	cout<<p1.getName()<<endl;
	p1.setAge(20);
	cout<<p1.getAge()<<endl;
	Person p2("Shobha", 50);
	p2.setName("Shobha");
	cout<<p2.getName()<<endl;
	p2.setAge(50);
	cout<<p2.getAge()<<endl;
}
