#include<iostream>
using namespace std;

int main()
{
	
	int n,i;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin>>array[i];
	}

	//left shift rotate
	for (int i = 0; i < n; i++)
	{
		array[i]=array[i+1];
	}
	

	for (int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";	
	}
	
}