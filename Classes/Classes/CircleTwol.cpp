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
    int number;

    cout<<"Please enter how many circles you would like to compute :";
    cin>>number;

    Circle circ1[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Circle "<<i<<": "<<endl;
        cout<<"------------------"<<endl;
        circ1[i].input();
        circ1[i].findarea();
        circ1[i].findperimeter();
        circ1[i].output();
        cout<<endl;
    }


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
