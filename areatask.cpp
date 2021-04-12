#include <iostream>

using namespace std;
int area(int l,int w)
{
    cout<<"Area of the rectangle is "<<l*w;
}
float area(float r)
{
    cout<<"\nArea of the circle is "<<3.14*r*r;
}
double area(double h,double b)
{
    cout<<"\nArea of the triangle is "<<0.5*h*b;
}

int main()
{
   int l=0,w=0,figure_side=0;
   float r=0;
   double h=0,b=0;
   cout<<"Enter required figure sides(rectangle(4),circle(0) and triangle(3)): ";
   cin>>figure_side;
   if(figure_side==4)
   {
       cout<<"\nEnter length of rectangle: ";
       cin>>l;
       cout<<"\nWidth of rectangle: ";
       cin>>w;
       area(l,w);
   }
    else if(figure_side==0)
   {
       cout<<"\nEnter radius of circle: ";
       cin>>r;
       area(r);
   }
    else if(figure_side==3)
   {
       cout<<"\nEnter height of triangle: ";
       cin>>h;
       cout<<"\nBase of triangle: ";
       cin>>b;
       area(h,b);
   }
   else
   {
       cout<<"give valid sides!!! ";
   }


    return 0;
}
