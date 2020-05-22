#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,width;
public:
    void input(),output();
    int get_length(),get_width();
};
int main()
{
    Rectangle rect1;
    rect1.input();
    rect1.output();
    if(rect1.get_length() == rect1.get_width())
    {
        cout<<"This is a square !!";
    }
    return 0;
}
void Rectangle::input()
{
    cout<<"Please enter the length :";
    cin>>length;
    cout<<"Please enter the width :";
    cin>>width;
}
void Rectangle::output()
{
    cout<<"The dimensions of the rectangle are :"<<endl;
    cout<<"Length :"<<length<<"\t"<<"Width :"<<width<<endl;

}
int Rectangle::get_length()
{
    return length;
}
int Rectangle::get_width()
{
    return width;
}

