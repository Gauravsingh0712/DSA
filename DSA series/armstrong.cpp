#include<iostream>
#include<math.h>
using namespace std;

bool armstrong(int num)
{
    int digit = 0,temp = num;
    while (temp!=0)
    {
        digit++;
        temp = temp/10;
    }
    
    int sum=0;
    for (temp=num;temp!=0;temp/=10)
    {
        sum=sum+ pow(temp%10,digit);
    }
    if(sum == num)
    {
        return true;
    }
    return false; 
}

int main()
{
    int num,temp,sum=0,a;
    cin>>num;


    bool result = armstrong(num);

    if(result)
    {
        cout<<"Armstrong Number"<<endl;
    }

    else{
        cout<<"Not an Armstrong Number"<<endl; 
    }
}