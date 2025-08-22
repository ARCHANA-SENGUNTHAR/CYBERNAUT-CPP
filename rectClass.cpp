//ASG-10
/*
2)Implement a C++ class called "Rectangle" that represents a rectangle with length and width
as data members. Include member functions to set the length and width, calculate the area and
perimeter, and display the details of the rectangle
*/
#include<iostream>
using namespace std;
class rectangle
{    
    public:
    double l;//length
    double w;//width
    double a;//area
    double p;//perimeter
    
    double Area(double l,double w)
    {
        a=l*w;
        return a;
    }
    
    double Perimeter(double l,double w);
};

double rectangle::Perimeter(double l,double w)
{
    return 2*(l+w);
}

int main()
{
    rectangle Rect;
    cout<<"Enter length of rectangle: ";
    cin>>Rect.l;
    cout<<"\n Enter width of rectangle: ";
    cin>>Rect.w;
    cout<<"\n Area is: "<<Rect.Area(Rect.l,Rect.w);
    cout<<"\n\n Perimeter is: "<<Rect.Perimeter(Rect.l,Rect.w);
    return 0;
}


