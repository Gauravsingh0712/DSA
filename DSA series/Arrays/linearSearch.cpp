#include<iostream>
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

	cout<<"enter the no. you want to search : "<<endl;
	cin>>key;

	for (int i = 0; i <=n-1; i++)
	{
		if(a[i]==key)
		{
			cout<<key<<"majje aa gye"<<i<<"index"<<endl;
			break;
		}
		

	}

	if(i == n)
		{
			cout<<"element not found"<<endl;
		}

	return 0;

}