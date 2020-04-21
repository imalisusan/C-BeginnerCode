#include<iostream>
#include<string>
using namespace std;

int main()
{
	char alpha;
	string sentence;

	cout<<"Please enter an alphabet :";
	cin>>alpha;

	cout<<"Please enter a sentence :";
	getline(cin,sentence);

	cout<<sentence;

	return 0;
}
