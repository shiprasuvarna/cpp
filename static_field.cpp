//Static
/* A field which is declared as static is called static field, 
Unlike instance field/variable which gets memory each time whenever we create an object.
There is only one copy of static field created in the memory.      
It is shared to all the objects
*/
#include<iostream>
using namespace std;
class Student{
	public:
		int roll_no;
		string name;
		static string clg_name;
		Student(int roll_no, string name)
		{
			this -> roll_no = roll_no;
			this -> name = name;
		}
		void display()
		{
			cout<<"Student roll no: "<<roll_no<<"\nStudent name : "<<name<<"\nCollege name: "<<clg_name<<endl;
		}
};
string Student :: clg_name = "TSEC";   //::scope resolution helps to call clg_name from student class 
main()
{
	Student s1 = Student(111, "Shipra Suvarna");
	s1.display();
	Student s2 = Student(133, "Reign");
	s2.display();
}
