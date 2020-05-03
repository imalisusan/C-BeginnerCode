#include<iostream>
using namespace std;
int calculate_total()
{
    int sum=0;
    for (int i = 21; i <70; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int num_sum;
    num_sum=calculate_total();
    cout<< "The sum of all whole numbers between 20 and 70 are: "<<num_sum<<endl;
}
