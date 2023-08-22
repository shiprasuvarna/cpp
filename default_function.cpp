//default function
#include<iostream>
using namespace std;
void great(string city="Mumbai")      //creating great function, setting the default value inside the ()
{
	cout<<city<<endl;
}
main()
{
	great("Delhi");
	great();       //whenever we dont mention anything inside the great() function then the default value ie Mumbai gets printed
    great();
}
