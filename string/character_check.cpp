#include<iostream>
using namespace std;
#include<string>

int main()
{
	char input;

	cout<<"Please enter a character :";
	cin>>input;

	if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
	{
		cout<<input<<" is a character"<<endl;
	}
	else if(input >= '0' && input <= '9')
	{
		cout<<input<<" is a digit"<<endl;
	}
	else
	{
		cout<<input<<" is a special character"<<endl;
	}
	return 0;
}
