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

	// reverse an array
	int start = 0;
	int end = n-1;
	for (int start = 0; start<end ; start++)
	{
		swap(array[start], array[end]);
		end--;
	}

	for (int i = 0; i < n; i++)
	{
		cout<<array[i]<<" ";	
	}
	
}