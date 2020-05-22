#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,width;
public:
    Rectangle(int x, int y);
    Rectangle();
    void input(),output(),output_();
    int get_length(),get_width();
};
int main()
{
    Rectangle rect1(5,10);
    cout<<"Please enter dimensions for Rectangle 1"<<endl;
    cout<<"---------------------------------------"<<endl;
    rect1.output_();
    rect1.input();
    rect1.output();
    cout<<endl;

    cout<<"Please enter dimensions for Rectangle 2"<<endl;
    cout<<"---------------------------------------"<<endl;
    Rectangle rect2;
    rect2.input();
    rect2.output();
    if(rect1.get_length() == rect1.get_width())
    {
        cout<<"This is a square !!";
    }
    return 0;
}
void Rectangle::input()
{
    cout<<"Please enter new length values:";
    cin>>length;
    cout<<"Please enter new width  values:";
    cin>>width;
}
void Rectangle::output()
{
    cout<<"The new dimensions of the rectangle are :"<<endl;
    cout<<"Length :"<<length<<"\t"<<"Width :"<<width<<endl;

}
void Rectangle::output_()
{
    cout<<"The default dimensions of the rectangle are :"<<endl;
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
Rectangle::Rectangle(int x, int y)
{
    length = x;
    width = y;
}
Rectangle::Rectangle()
{
    //Default constructor
}

