//percentage to 
#include<iostream>
using namespace std;
main()
{
	int math,phy,chem,bee,mech,total;
	double percentage;
	cout<<"Enter your marks in maths"<<endl<<"Enter your marks in Physics"<<endl<<"Enter your marks in Chemistry"<<endl<<"Enter your marks in electronics"<<endl<<"Enter your marks in mechanics"<<endl;
	cin>>math>>phy>>chem>>bee>>mech;
	total=math+phy+chem+bee+mech;
    percentage=(total*100)/500;
    cout<<"Your percentage is: "<<percentage<<endl;
    if(percentage>=60)
    {
    	cout<<"You are in the first division"<<endl;
	}
	else if(percentage>50 && percentage<59)
	{
		cout<<"You are in the second division"<<endl;
	}
	else if(percentage>40 & percentage<49)
	{
		cout<<"You are in the third division"<<endl;
	}
	else
	{
	
       cout<<"Error"<<endl;	
}
	
}
