#include<iostream>
using namespace std;
int main()
{
    int db = 13;
    int *ptr;
    ptr = &db;

    cout<<"db - > "<<db<<endl;
    cout<<"&db-> "<<&db<<endl;
    cout<<"ptr ->"<<ptr<<endl;
    cout<<"&ptr ->"<<&ptr<<endl;
    cout<<*ptr<<endl;
}