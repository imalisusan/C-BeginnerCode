#include<iostream>
using namespace std;
int main()
{
	int marks[5] = {10,13,25,34,45};
	int age[5];

	int *ptr;

	for(int i = 0; i < 5; i++)
	{
		cout<<"Mark address:"<<&marks[i]<<endl;
	}

	ptr = marks;

	for(int i = 0; i < 5; i++)
	{
		cout<<"Pointer address:"<<ptr + i<<endl;
	}

	for(int i =0; i < 5; i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>> *(age + i);
	}

	for(int i =0; i < 5; i++)
	{
		cout<<"The age is : "<<*(age + i)<<endl;
	}

	return 0;
}