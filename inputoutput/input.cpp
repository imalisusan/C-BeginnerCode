#include<iostream>
#include<string>
using namespace std;

int main()
{
	char alphabet;
	string sentence;
	int number;

	cout<<"Please enter a sentence :";
	getline(cin, sentence);

	cout<<"Please enter your chosen number :";
	cin>>number;

	cout<<"Please enter your alphabet";
	cin>>alphabet;

	cout<<endl;

	return 0;
}