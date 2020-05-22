#include<iostream>
using namespace std;

int addition(int a, int b);
int addition(int a, int b, int c);
int addition(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;

    cout<<"Please enter the first number :";
    cin>>a;
    cout<<"Please enter the second number :";
    cin>>b;
    cout<<"Please enter the third number :";
    cin>>c;
    cout<<"Please enter the fourth number :";
    cin>>d;

    cout<<"The sum of "<<a<<" and "<<b<<" is :"<<addition(a,b)<<endl;
    cout<<"The sum of "<<a<<" , "<<b<<" and "<<c<<" is :"<<addition(a,b,c)<<endl;
    cout<<"The sum of "<<a<<" , "<<b<<","<<c<<" and "<<d<<" is :"<<addition(a,b,c,d)<<endl;

    return 0;
}
int addition(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}
int addition(int a, int b, int c)
{
    int sum = 0;
    sum = a + b + c;
    return sum;
}
int addition(int a, int b, int c, int d)
{
    int sum = 0;
    sum = a + b + c + d;
    return sum;
}
