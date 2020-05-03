#include<iostream>
#include<string>
using namespace std;
struct Customer
{
    int cust_id;
    char cust_name;
    char cust_email;
    char password; 
};
int main()
{
    Customer first_Customer;
    cout<< "Please input the  Customer ID"<<endl;
    cin>>first_Customer.cust_id;
    cout<< "Please input the Customer Name"<<endl;
    cin>>first_Customer.cust_name;
    cout<< "Please input the Customer Email Address"<<endl;
    cin>>first_Customer.cust_email;
    cout << "Customer ID\t"<< "Name\t" <<"Email Address"<<endl;
    cout<< first_Customer.cust_id<<"\t"<<first_Customer.cust_name<<"\t"<<first_Customer.password<<endl;
}