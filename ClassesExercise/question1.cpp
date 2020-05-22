#include<iostream>

using namespace std;

class Biz
{
    private:
    int buying_price, transport_price, selling_price, deviation;
    public:
    Biz();
    Biz(int buying_price, int transport_price, int selling_price);
    int getBuyingPrice(), getTransportPrice(), getSellingPrice();
    void input(),calculate(), output();
};

int main()
    {
        Biz item;
        cout<<"Please enter the details of the product:"<<endl;
        cout<<"-----------------------------------------"<<endl;
        item.input();
        item.calculate();
        item.output();
    }

void Biz::input()
    {
        cout<<"Please enter the buying price of the item:"<<endl;
        cin>>buying_price;
        cout<<"Please enter the transporting price of the item:"<<endl;
        cin>>transport_price;
        cout<<"Please enter the selling price of the item:"<<endl;
        cin>>selling_price;
    }
void Biz::calculate()
    {
        deviation=selling_price-buying_price; 
    }
void Biz::output()
    {
    if(deviation>0)
        {
            cout<<"You have made a profit of: "<<deviation<<endl;
        }
        else if(deviation<0)
        {
            cout<<"You have made a loss of: "<<deviation<<endl;
        }
        else
        {
            cout<<"You have not made any profit or loss"<<endl;
        }   
    }
int Biz::getBuyingPrice()
    {
        return buying_price;
    }
int Biz::getTransportPrice()
    {
        return transport_price;
    }
int Biz::getSellingPrice()
    {
        return selling_price;
    }
Biz::Biz()
    {
        buying_price=0;
        transport_price=0;
        selling_price=0;
    }