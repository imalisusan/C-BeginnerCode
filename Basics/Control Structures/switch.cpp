#include<iostream>
using namespace std;

int main()
{
	int number;

	cout<<"Please enter your PIN :";
	cin>> number;

	cout<<endl;
	switch(number)
	{
		case 1234:
			cout<<"Correct PIN"<<endl;
			break;
		default:
			cout<<"Wrong PIN. Try again!";
	}
	return 0;
}