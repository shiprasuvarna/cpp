//class object 
#include<iostream>
using namespace std;
class Student{      //creates class called student
	public:         //access specifier
		int roll_no;
		string name, clg;
		void display()   //creates function called void
		{
			cout<<"Roll number is "<<roll_no<<endl<<"Name is "<<name<<endl<<"College name is "<<clg<<endl;
		}
};
main()
{
	Student s1;     //creates object called s1 from class student 
	s1.roll_no=111;
	s1.name="shipra suvarna";
	s1.clg="TSEC";
	s1.display();   //calls display function
}
