
// print a multipliaction table using for loop
#include<iostream>
using namespace std;

int main()
{
    long long int num;
    cin>>num;

    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }

    return 0;   
}