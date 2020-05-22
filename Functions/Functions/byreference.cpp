#include<iostream>
using namespace std;

void my_function(int &x,int &y);
int main()
{
    int a=5,b=10;

    cout<<"Before the function call :\n";
    cout<<"a = "<<a<<" and b ="<<b;

    my_function(a,b);
    cout<<"\n After the function call :";
    cout<<"a = "<<a<<" and b ="<<b;

    return 0;
}

void my_function(int &x, int &y)
{
    x = x * 5;
    y = y * 2;
    cout<<"\n In the function :\n";
    cout<<"x = "<<x<<" and y ="<<y;
}
