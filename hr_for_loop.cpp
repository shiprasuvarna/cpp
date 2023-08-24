/*
You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>a>>b;
    for(n=a;n<=b;n++)
    if(n>=1 && n<=9)
    {
        if(n==1){
            cout<<"one"<<endl;
        }
        else if(n==2)
        {
            cout<<"two"<<endl;
        }
        else if(n==3)
        {
            cout<<"three"<<endl;
        }
        else if(n==4)
        {
            cout<<"four"<<endl;
        }
        else if(n==5)
        {
            cout<<"five"<<endl;
        }
        else if(n==6)
        {
            cout<<"six"<<endl;
        }
        else if(n==7)
        {
            cout<<"seven"<<endl;
        }
        else if(n==8)
        {
            cout<<"eight"<<endl;
        }
        else if(n==9)
        {
            cout<<"nine"<<endl;
        }
    }
    else if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
    
}
