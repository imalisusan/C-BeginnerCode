#include<iostream>
using namespace std;
int main()
{
	int x = 5;
	int y = 4;

	if (x > y)
	{
		cout<<x<<" is greater than "<<y<<endl;
	}
	else if (x == y)
	{
		cout<<x<<" is equal to "<<y<<endl;
	}
	else
	{
		cout<<y<<" is greater than "<<x<<endl;
	}

	return 0;
}