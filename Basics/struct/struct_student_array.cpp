#include<iostream>
using namespace std;
struct Student{
	string name;
	int mark;
};
void printDetails(Student stud);
int main()
{
	Student stud1 = {"John",10};

	printDetails(stud1);


	return 0;
}
void printDetails(Student stud)
{
	cout<<"Your name is :"<<stud.name;
	cout<<endl;
	cout<<"Your mark is :"<<stud.mark;
	cout<<endl;
}