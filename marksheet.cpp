#include<iostream>
using namespace std;
class Student{
	private:
		int roll, m1, m2, m3, total;
		string name;
		public:
			void getdata()
			{
				cout<<"Enter the roll no and name of the student"<<endl;
				cin>>roll>>name;
				cout<<"Enter marks in three subjects"<<endl;
				cin>>m1>>m2>>m3;
				total=m1+m2+m3;
			}
			void showdata()
			{
				cout<<"========================================================================================================================";
			    cout<<"Roll no : "<<roll<<"\t Name : "<<name<<"\t Subject 1 : "<<m1<<"\t Subject 2 : "<<m2<<"\t Subject 3 : "<<m3<<"\t Total marks : "<<total<<endl;
			}
};
main()
{
	Student s[3];
	int i;
	for(i=0; i<3; i++)
	s[i].getdata();
	for(i=0; i<3; i++)
	s[i].showdata();
}
