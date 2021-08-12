#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else{
        
    int ans = fibo(n-1) + fibo(n-2);
    return 1+ ans;
    } 
}

int main()
{
    cout<<fibo(3)<<endl;
}
