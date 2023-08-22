//function
#include<iostream>
using namespace std;
void myFunc()    //creates the function
{
	cout<<"This is my Function"<<endl;
}
main()
{
	myFunc();      //calling the function, function is called inside the main(), without calling the function message wouldnt be visible
	cout<<"This is SHipra"<<endl;
	myFunc();
}
