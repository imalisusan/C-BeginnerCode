#include<iostream>
#include<string>
using namespace std;
struct Student{
	string name;
	int marks[5];
};

Student readDetails();
double markAvg(int score[5]);
int main()
{
	Student stud1;
	double average;

	stud1 = readDetails();
	cout<<"Student Name : "<<stud1.name<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Your mark for subject "<<i<<" is :"<<stud1.marks[i]<<endl;
	}
	cout<<endl;

	average = markAvg(stud1.marks);
	cout<<"Your average score is :"<<average;
	return 0;
}

Student readDetails()
{
	Student stud;
	cout<<"Enter the name of student :";
	cin>>stud.name;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the mark for subject "<<i<<" : ";
		cin>>stud.marks[i];
	}
	return stud;
}
double markAvg(int score[5])
{
	int total = 0;
	for(int i=0;i<5;i++)
	{
		total += score[i];
	}
	double avg = total / 5;

	return avg;
}
