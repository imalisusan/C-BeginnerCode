//This code demonstrates the two ways to create strings in C++
//Using the string class or creating an array of characters.
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name = "John"; //Using the string class
	char jina[10] = {'J','o','h','n'}; //Declaring a string as an array of characters.

	cout<<name<<endl;
	cout<<jina<<endl;

	return 0;
}