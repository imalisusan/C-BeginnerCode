#include<iostream>
using namespace std;
int calc_tax(int gross_amount);

int main()
    {
    int gross_pay,tax_amount,net_pay;
    cout<<"Please enter your gross pay: "<<endl;
    cin>>gross_pay;  
    tax_amount=calc_tax(gross_pay);
    net_pay=gross_pay-tax_amount;
    cout<<"Your tax amount is: "<<tax_amount<<endl;
    cout<<"Your net pay is: "<<net_pay<<endl;
    }

int calc_tax(int gross_amount)
    {
        int tax_rate;
        if(gross_amount >= 50000)
        {
            tax_rate=gross_amount*0.35;
        }
        else if(gross_amount>=40000)
        {
            tax_rate=gross_amount*0.3;
        }
        else if(gross_amount>=20000)
        {
            tax_rate=gross_amount*0.25;
        }
        else if(gross_amount >= 12000)
        {
            tax_rate=gross_amount*0.15;
        }
        else
        {
            tax_rate=0;
        }
         
    }