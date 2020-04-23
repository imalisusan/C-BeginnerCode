#include<iostream>
#include<string>
using namespace std;
int balance=500000;
int withdrawal(int withdraw)
{
    if(withdraw>balance || withdraw>1000000)
            {
                cout<<"You cannot withdraw more that amount"<<endl;
            }
    else
            {
            balance=balance-withdraw;
            cout<<"You have withdrawn: Kshs." <<withdraw+"Your account balance is: Kshs." <<balance <<endl;
            }
    return 0;
}
int balance_amount()
{
    cout<<"Your account balance is: Kshs." <<balance<<endl;
}
int fund_transfer(int transfer)
{
        if(transfer>balance || transfer>1000000)
        {
            cout<<"You cannot transfer more that amount"<<endl;
        }
        else
        {
        balance=balance-transfer;
        cout<<"You have transfered: Kshs." <<transfer+"Your account balance is: Kshs." <<balance<<endl;
        }
        return 0;
}
int bank_deposit(int deposit)
{
        if(deposit>1000000)
        {
        cout<<"You cannot deposit more than 1000000"<<endl;
        }
        else
        {
        balance=balance+deposit;
        cout<<"You have deposited: Kshs." <<deposit +".Your account balance is: Kshs."<<balance<<endl;
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
        cout<<"Wrong password!"<<endl;
        cout<<"Please enter your password:"<<endl;
        cin>>password1;
   }
    char choice;
    int balance=5000000, withdraw, transfer,deposit, result;
    cout<<"Hello,Susan :)"<<endl;
    cout<<"The following are transactions you can carry out:\nMake a withdrawal. Choose letter 'W' for this.\nBalance Enquiry. Choose letter 'B' for this.\nMake a bank deposit. Choose letter 'D' for this.\nMake a fund transfer. Choose letter 'T' for this.\n";
    cin>>choice;
    switch (choice)
    {
    case 'W':
        cout<<"Enter amount to withdraw:"<<endl;
        cin>>withdraw;
        result= withdrawal(withdraw);
        break;
    case 'B':
        result=balance_amount();
        break;
    case 'T':
        cout<<"Enter amount to transfer:"<<endl;
        cin>>transfer;
        result=fund_transfer(transfer);
        break;
    case 'D':
        cout<<"Enter amount to deposit:"<<endl;
        cin>>deposit;
        result=bank_deposit(deposit);
        break;
    
    default:
        cout<<"Please choose a valid input."<<endl;
        break;
    }
    
   return 0;     

}