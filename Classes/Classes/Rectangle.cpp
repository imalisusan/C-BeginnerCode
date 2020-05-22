#include<iostream>
using namespace std;
class Rectangle
{
      public:
        int length,width;
};
int main()
{
    Rectangle rect1;
    cout<<"Enter the length of the rectangle:";
    cin>>rect1.length;
    cout<<"Enter the width of the rectangle:";
    cin>>rect1.width;

    cout<<"The length of the rectangle is :"<<rect1.length<<endl;
    cout<<"The width of the rectangle is :"<<rect1.width<<endl;

    return 0;
}
