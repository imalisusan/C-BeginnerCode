#include<iostream>
#include<math.h>
using namespace std;
double volume(double length, double breadth, double height);
double volume(double radius);
double volume(double radius, double height);
int main() 
{
    char selection;
        cout<<"\n Menu";
        cout<<"\n===================";
        cout<<"\n C - Cylinder Volume";
        cout<<"\n S - Sphere Volume";
        cout<<"\n B- Cuboid Volume";
        cout<<"\n X - Exit";
        cout<<"\n Enter selection: ";
    cin>>selection;
    switch (selection)
    {
    case 'C':
        double radius, height, volume_Cylinder;
        cout<< "Please input the radius of the cylinder"<<endl;
        cin>>radius;
        cout<< "Please input the height of the cylinder"<<endl;
        cin>>height;
        volume_Cylinder=volume(radius,height);
        cout<<"The volume of the rectangle is: "<<volume_Cylinder<<endl;
        break;
    case 'S':
        double radius, volume_Sphere;
        cout<< "Please input the radius of the sphere"<<endl;
        cin>>radius;
        volume_Sphere=volume(radius);
        cout<<"The volume of the sphere: "<<volume_Sphere<<endl;
        break;
    case 'B':
        double length,breadth,height, volume_Cuboid;
        cout<< "Please input the length of the cuboid"<<endl;
        cin>>radius;
        cout<< "Please input the breadth of the cuboid"<<endl;
        cin>>radius;
        cout<< "Please input the height of the cuboid"<<endl;
        cin>>radius;
        volume_Cuboid=volume(radius);
        cout<<"The volume of the cuboid is: "<<volume_Cuboid<<endl;
        break;
    case 'X':
        cout<<"Bye"<<endl;
        break;
    default:
        cout<<"Please choose a valid input"<<endl;
        break;
    }
}

double volume(double length, double breadth, double height)
{
    double answer=length*breadth*height;
    return answer;
}
double volume(double radius)
{
    double answer=(4*3.142*radius*radius)/3;
    return answer;
}
double volume(double radius, double height)
{
    double answer=3.142*radius*radius*height;
    return answer;
}