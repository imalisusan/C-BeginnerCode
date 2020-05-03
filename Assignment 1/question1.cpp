#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
int number, square,cube,square_root,cube_root;
cout << "Please input a number"<<endl;
cin>>number;
square= number*number;
cube= number*number*number;
square_root=sqrt(number);
cube_root=cbrt(number);
cout<< "The square of "<<number<<" is: "<<square<<endl;
cout<< "The cube of "<<number<<" is: "<<cube<<endl;
cout<< "The square root of "<<number<<" is: "<<square_root<<endl;
cout<< "The cube root of "<<number<<" is: "<<cube_root<<endl;
}