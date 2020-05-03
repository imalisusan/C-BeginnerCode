#include<iostream>
using namespace std;
int main() 
{
    int no_of_items, item_code, quantity, price, total_cost;

    cout<<"Please input the number of item types you want: "<<endl;
    cin>>no_of_items;

    int items[no_of_items][4];

    for (int i = 1; i <= no_of_items; i++)  
    {
        cout<<"Please input the item code: "<<endl;
        cin>>item_code;

        cout<<"Please input the price of the item: "<<endl;
        cin>>price;

        cout<<"Please input the quantity: "<<endl;
        cin>>quantity;

        total_cost = price*quantity;

        int one_item [4] = {item_code, price, quantity, total_cost};
        int len = sizeof(one_item)/sizeof(one_item[0]);

        for (int j = 0; j < len; j++)
        {
            items[i-1][j] = one_item[j];
        }
        
    }
    cout<<"Item Code \tPrice \tQuantity \tTotal Cost"<<endl;
    for (int i = 0; i < no_of_items; i++)
    {
        cout<<items[i][0]<<" \t \t "<<items[i][1]<<" \t "<<items[i][2]<<" \t \t "<<items[i][3]<<endl;
        
    }
    
    
}