#include<iostream>
using namespace std;

class array
{
private:
	int *a;
	int size;
	int filled;

public:
	array()
	{
		size = 13;
		a = new int[size];
		for (int i = 0; i < 5; i++)
		 {
		 	a[i]= i+1;
		 } 
		 filled = 5;
	}
	array(int size)
	{
		this->size = size;
		a = new int[size];
		filled = 0;
	}
	void printElement()
	{
		for (int i = 0; i < filled; i++)
		{
			cout<<a[i]<<"-->";
		}
		cout<<endl;
	}
};

int main()
{
	array *a1;
	a1 = new array();

	a1->printElement();
}