#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
        double area, perimeter;
    public:
        void input(),output(),findarea(),findperimeter();
};
int main()
{
    Circle circ1;
    Circle circ2;
    cout<<"The first circle program"<<endl;
    cout<<"------------------"<<endl;
    circ1.input();
    circ1.findarea();
    circ1.findperimeter();
    circ1.output();
    cout<<endl;
    cout<<"The second circle program"<<endl;
    cout<<"------------------"<<endl;
    circ2.input();
    circ2.findarea();
    circ2.findperimeter();
    circ2.output();

    return 0;
}
void Circle::input()
{
    cout<<"Please enter the radius :";
    cin>>radius;
}
void Circle::findarea()
{
    area = 3.142 * radius * radius;
}
void Circle::findperimeter()
{
    perimeter = 2 * 3.142 * radius;
}
void Circle::output()
{
    cout<<"The area of the circle is :"<<area<<endl;
    cout<<"The perimeter of the circle is :"<<perimeter<<endl;
}
