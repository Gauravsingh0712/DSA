#include<iostream>
using namespace std;

double tailor(int x ,int n)
{
    double num=1, den =1,series;
    if(n==0)
    {
        return 1;
    }
    else
    {
        series= tailor( x,n-1);
        num = num*x;
        den = den * n;
        return series + num/den;
    }
}

int main()
{
    cout<<tailor(3,2)<<endl;
}