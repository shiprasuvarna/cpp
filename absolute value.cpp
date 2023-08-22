#include<math.h>
#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<"Absolute value is "<<abs(num)<<endl;   //absolute value returns a positive value if we entered a negative value
	cout<<"Square root of the number is "<<sqrt(num)<<endl;
	cout<<"Cosine value of the number is "<<cos(num)<<endl;
	cout<<"Sine value of the number is "<<sin(num)<<endl;
	cout<<"Power of the number is "<<pow(num,4)<<endl; //returns num raised to 4 
	cout<<"modulus of the number is "<<fmod(num,3)<<endl;
	cout<<"Maximum number out of 12 and "<<num<<"is "<<max(num,12)<<endl;
	cout<<"Minimum number out of 12 and "<<num<<"is "<<min(num,12)<<endl;
	cout<<"Round off the number 12.3232 is "<<round(12.3232)<<endl;
}
