#include<iostream>
using namespace std;

int main()
{
    int cost,sell;
    cin>>cost>>sell;

    // while(cost < sell)
    // {
    //     cout<<"profit is : "<<sell-cost;
    //     cin>>cost>>sell;
    // }

    // do
    // {
    //     cin>>cost>>sell;
    //     cout<<"profit is : "<<sell-cost<<endl;
    // } while (cost<sell);
    
    for (int i = 1; i < 5; i++)
    {
        cout<<"profit is : "<<sell-cost<<endl;
        cin>>cost>>sell;
    }
    return 0 ;
    
}