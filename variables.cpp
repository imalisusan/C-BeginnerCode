#include<iostream>
using namespace std;
int main()
{
	//Sample code for storing a student details. For demo only.
	int studentnumber;
	char name[30];
	float marks[5];
	float sum =0;
	double average;
	bool pass;

	cout<<"Please enter the student number :";
	cin>>studentnumber;
	cout<<endl;

	cout<<"Please enter the name of the student :";
	cin>>name;
	cout<<endl;

	for(int i=0;i<5;i++)
	{
		cout<<"Please enter the marks for the student :";
		cin>>marks[i];
		sum += marks[i];
	}

	average =  sum / 5;

	if(average > 50.0)
	{
		pass = true;
	}
	else
	{
		pass = false;
	}
	cout<<"You have passed (True / False) :"<<pass;
	
	return 0;
}