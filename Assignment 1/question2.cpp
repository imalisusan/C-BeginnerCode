#include<iostream>
using namespace std;
int main() 
{
    // Declaration of variables
    int deposit, time;
    double balance = 0.0, i_rate, calculating_r, c_interest = 0.0;

    // Deposit Input
    cout<<"Enter the deposit:"<<endl;
    cin>>deposit;
    balance += deposit;

    // Interest Rate Input
    cout<<"Enter the interest rate in %:"<<endl;
    cin>>i_rate;
    calculating_r = i_rate/100;

    // Time Input
    cout<<"Enter the time in years:"<<endl;
    cin>>time;

    // Column Titles Output
    cout<<"Year \tInterest \tBalance"<<endl;

    // Compound Interest
    for(int t = 1; t <= time; t++){
        double interest = calculating_r * balance;
        c_interest += interest;
        balance += interest;
        // Print each year's interest and the total balance at that time
        cout<<t<<"\t"<<interest<<"\t \t"<<balance<<endl;

        // Print the last two lines of output
        if (t == time)
        {
            cout<<"\nThe compounded interest for "<<time<<" years is Ksh."<<c_interest<<endl;
            cout<<"\nThe balance in the account after "<<time<<" at an interest rate of "<<i_rate<<" percent is Ksh."<<balance;

        }
    }

}