#include<iostream>
#include<math.h>
using namespace std;

class Bank_Int
{
    private:
    float deposit, years, rate, interest, bank_balance;
    public:
    Bank_Int();
    Bank_Int(int deposit, int years, int rate);
    int getDeposit(), getYears(), getRate();
    void input(),calculate(), output();
};

int main()
    {
        Bank_Int item;
        cout<<"Please enter the details of the product:"<<endl;
        cout<<"-----------------------------------------"<<endl;
        item.input();
        item.calculate();
        item.output();

        Bank_Int item_two;
        cout<<"Please enter the details of the product:"<<endl;
        cout<<"-----------------------------------------"<<endl;
        item.calculate();
        item.output();
        //Making use of the object again
        item_two.input();
        item_two.calculate();
        item_two.output();

    }

void Bank_Int::input()
    {
        cout<<"Please enter the deposit:"<<endl;
        cin>>deposit;
        cout<<"Please enter the interest rate:"<<endl;
        cin>>rate;
        cout<<"Please enter the number of years:"<<endl;
        cin>>years;
    }
void Bank_Int::calculate()
    {
        interest = deposit*pow((1+rate/100), years);
        bank_balance=deposit+interest;
    }
void Bank_Int::output()
    {
    cout<<"Principal: \t"<<deposit<<"Interest Rate: \t"<<rate<<"Number of Years: \t"<<years<<endl;
    cout<<"Interest Amount: \t"<<interest<<endl;
    cout<<"Bank Balance: \t"<<bank_balance;

    }
int Bank_Int::getDeposit()
    {
        return deposit;
    }
int Bank_Int::getYears()
    {
        return years;
    }
int Bank_Int::getRate()
    {
        return rate;
    }
Bank_Int::Bank_Int()
    {
        deposit = 0;
        years = 0;
        rate = 0;
    }