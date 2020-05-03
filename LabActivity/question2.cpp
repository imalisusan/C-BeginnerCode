#include<iostream>
using namespace std;
int fibonacci(int x);

int main()
    {
        int x,i=0;
        cout<<"Enter the number of n terms for the series: "<<endl;
        cin>>x;
        cout<<"The fibonacci series is: "<<endl;
        while (i<x)
        {
            cout<<fibonacci(i)<<" ";
            i++;
        }
        
    }

int fibonacci(int x)
    {
       if((x==1)||(x==0))
       {
           return x;
       } 
       else
       {
           return (fibonacci(x-1)+fibonacci(x-2));
       }
       
    }