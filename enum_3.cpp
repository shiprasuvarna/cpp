#include<iostream>
using namespace std;
main()
{
	enum level{
		low=1, medium=2, high=3
	};
	level l = medium;
	switch(l){
		case 1:
			cout<<"Low Level";
			break;
			case 2:
			cout<<"Medium Level";
			break;
			case 3:
			cout<<"High Level";
			default:
			cout<<"Invalid";
	}
}
