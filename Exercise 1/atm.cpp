#include<iostream>
#include<string>
using namespace std;
int balance=500000;
int withdrawal(int withdraw)
{
    if(withdraw>balance || withdraw>1000000)
            {
                cout<<"You cannot withdraw more that amount\n\n";
            }
    else
            {
            balance=balance-withdraw;
            cout<<"\nYou have withdrawn: Kshs. %d.\n\nYour account balance is: Kshs. %d.\n", withdraw, balance;
            }
    return 0;
}
int balance_withdraw()
{
    cout<<"\nYour account balance is: Kshs. %d.\n\n", balance;
}
int fund_transfer(int transfer)
{
        if(transfer>balance || transfer>1000000)
        {
            cout<<"You cannot transfer more that amount\n\n";
        }
        else
        {
        balance=balance-transfer;
        cout<<"\nYou have transfered: Kshs. %d.\n\nYour account balance is: Kshs. %d.\n", transfer, balance;
        }
        return 0;
}
int bank_deposit(int deposit)
{
        if(deposit>1000000)
        {
        cout<<"You cannot deposit more than 1000000\n\n";
        }
        else
        {
        balance=balance+deposit;
        cout<<"\nYou have deposited: Kshs. %d.\n\nYour account balance is: Kshs. %d.\n", deposit, balance;
        }  
        return 0;
}
int main()
{
    int password= 2019, password1;
    cout<<"Welcome, please enter your password:";
    cin>>password1;
    while(password!=password1) 
   {
        cout<<"Wrong password!\n\n";
        cout<<"Please enter your password:\n\n";
        cin>>password1;
   }
    char choice;
    int balance=5000000, withdraw, transfer,deposit, result;
    cout<<"\nHello,Yasan :)\n\n";
    cout<<"The following are transactions you can carry out:\n\nMake a withdrawal. Choose letter 'W' for this.\n\nBalance Enquiry. Choose letter 'B' for this.\n\nMake a bank deposit. Choose letter 'D' for this.\n\nMake a fund transfer. Choose letter 'T' for this.\n\n";
    cin>>choice;
    switch (choice)
    {
    case 'W':
        cout<<"\nEnter amount to withdraw:\n\n";
        cin>>withdraw;
        result= withdrawal(withdraw);
        break;
    case 'B':
        result=balance_withdraw();
        break;
    case 'T':
        cout<<"\nEnter amount to transfer:\n\n";
        cin>>transfer;
        result=fund_transfer(transfer);
        break;
    case 'D':
        cout<<"\nEnter amount to deposit:\n\n";
        cin>>deposit;
        result=bank_deposit(deposit);
        break;
    
    default:
        cout<<"\nPlease choose a valid input.\n\n";
        break;
    }
    
   return 0;     

}