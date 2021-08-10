#include<iostream>
using namespace std;

int sum(int num)
{
    int sum = 0;

    for (int i = 1; i <= num ; i++)
    {
        sum = sum + num;
    }
    return sum;
}

int main()
{
    int num;
    cin>>num;
    

    cout<<"sum from 1 to"<<num<<"is"<<sum(num)<<endl;
    
}