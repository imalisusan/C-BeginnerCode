#include<iostream>
#include<string>
using namespace std;

struct Student{
	string name;
	int marks;
};

int main()
{
	Student stud1[5];

	for(int i=0;i<5;i++)
	{
	   cout<<"Enter the name of the student :";
	   cin>>stud1[i].name;
	   cout<<"Enter the marks for the student :";
	   cin>>stud1[i].marks;
	   cout<<"----------------------------------";
	   cout<<endl;
	}
	for(int i=0;i<5;i++)
	{
	   cout<<"The name of student is :"<<stud1[i].name<<endl;
	   cout<<"The mark for the student is :"<<stud1[i].marks<<endl;
	   cout<<"----------------------------------";
	   cout<<endl;
	}

	return 0;
}
