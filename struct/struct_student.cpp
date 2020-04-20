#include<iostream>
#include<string>
using namespace std;
#define newline '\n';
struct Student{
	char name[50];
	char email[50];
	int age;
};

int main()
{
	Student stud1;

	cout<<"Please enter your name :"<<newline;
	cin>>stud1.name;
	cout<<"Please enter your email address :"<<newline;
	cin>>stud1.email;
	cout<<"Please enter your age :"<<newline;
	cin>>stud1.age;

	cout<<newline;

	cout<<"The details you have entered are as follows:"<<newline;
	cout<<"--------------------------------------------"<<newline;

	cout<<"Student Name : "<<stud1.name;
	cout<<newline;
	cout<<"Student Email : "<<stud1.email;
	cout<<newline;
	cout<<"Student Age : "<<stud1.age;

	return 0;
}

	