#include<iostream>
using namespace std;

int BinarySeach(int a[],int n ,int key)
{
	int s=0;
	int e=n-1;

	while(s<=e)
	{
		int mid = (s+e)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		if (a[mid]>key)
		{
			e = mid-1;
		}
		else
		{
			s = mid+1;
		}

	}
	return -1;
}

int main()
{
	int i,n,key;
	cin>>n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		
	}
	cout<<"enter the no. you want to search : "<<endl;
	cin>>key;

	cout<<BinarySeach(a,n,key)<<endl;


}