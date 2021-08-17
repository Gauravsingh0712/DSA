#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int i,n,key;
	cin>>n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		
	}

	int largest = INT_MIN;
	int smallest = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if(a[i]>largest)
		{
			largest = a[i];
		}
		if(a[i]<smallest)
		{
			smallest = a[i];
		}
	}
	cout<<"largest num : "<<largest<<endl;
	cout<<"smallest num : "<<smallest<<endl;
}