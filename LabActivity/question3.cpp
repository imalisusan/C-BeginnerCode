#include<iostream>
using namespace std;
int area(int length, int width);
int area(int base, int height);
int area(int radius);
    
int main() 
{
    char selection;
        cout<<"\n Menu";
        cout<<"\n===================";
        cout<<"\n R - Rectangle Area";
        cout<<"\n T - Triangle Area";
        cout<<"\n C - Circle Area";
        cout<<"\n X - Exit";
        cout<<"\n Enter selection: ";
    cin>>selection;
    switch (selection)
    {
    case 'R':
        double length, width, area_Rectangle;
        cout<< "Please input the length of the rectangle"<<endl;
        cin>>length;
        cout<< "Please input the width of the rectangle"<<endl;
        cin>>width;
        area_Rectangle=area(length,width);
        cout<<"The area of the rectangle of length "<<length<< "and width "<<width<< "is: "<<area_Rectangle<<endl;
        break;
    case 'T':
        double base, height, area_Triangle;
        cout<< "Please input the base of the triangle"<<endl;
        cin>>base;
        cout<< "Please input the height of the triangle"<<endl;
        cin>>height;
        area_Triangle=area(base,height);
        cout<<"The area of the triangle of base "<<base<< "and height "<<height<< "is: "<<area_Triangle<<endl;
        break;
    case 'C':
        double radius, area_Circle;
        cout<< "Please input the radius of the circle"<<endl;
        cin>>radius;
        area_Circle=area(radius);
        cout<<"The area of the circle of radius "<<radius<< "is: "<<area_Circle<<endl;
        break;
    case 'X':
        cout<<"Bye"<<endl;
        break;
    default:
        cout<<"Please choose a valid input"<<endl;
        break;
    }

}
    
    int area(int length, int width)
    {
       int area_rectangle=length*width; 
       return area_rectangle;
    }
    int area(int base, int height)
    {
       int area_triangle=0.5*base*height; 
       return area_triangle;
    }
    int area(int radius)
    {
        int area_circle=3.142*radius*radius;
        return area_circle;
    }  