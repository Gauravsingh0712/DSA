#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%4==0 && (a%100!=0 || a%400 == 0))
    {
        cout<<"this is a leap year"<<endl;   
    }
    else
    {
        cout<<"this is not a leap year"<<endl; 
    }
    return 0;
}