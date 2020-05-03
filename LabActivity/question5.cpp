#include<iostream>
using namespace std;
int small(int first, int second, int third);
void smallest(int first, int second, int third);
int main()
    {
        int first_integer,second_integer,third_integer, largest;
        cout<<"Plese input the first integer: "<<endl;
        cin>>first_integer;
        cout<<"Plese input the second integer: "<<endl;
        cin>>second_integer;
        cout<<"Plese input the third integer: "<<endl;
        cin>>third_integer;
        //Calling the small function
        largest=small(first_integer,second_integer,third_integer);
        //Calling the smallest function
        smallest(first_integer,second_integer,third_integer);
    }
int small(int first, int second, int third)
    {
        if(first >= second && first >= third )
        {
            return first;
        }
        else if(second >= first && second >= third )
        {
            return second;
        }
        else
        {
            return third;
        }
        
    }

void smallest(int first, int second, int third)
    {
        if(first >= second && first >= third )
        {
            cout<<first<<" "<<second<<" "<<third<<endl;
            cout<<"The larget number between the three is: "<<first;
        }
        else if(second >= first && second >= third )
        {
            cout<<first<<" "<<second<<" "<<third<<endl;
            cout<<"The larget number between the three is: "<<second;
        }
        else
        {
            cout<<first<<" "<<second<<" "<<third<<endl;
            cout<<"The larget number between the three is: "<<third;
        }
    }
