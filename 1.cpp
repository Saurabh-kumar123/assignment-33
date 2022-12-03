#include<iostream>
using namespace std;
class Shape
{
protected:
     double l1,l2;
public:
     void setdata(int l1,int l2)
     {
          this->l1=l1;
          this->l2=l2;
     }
     int get_l1(){return l1;}
     int get_l2(){return l2;}
     virtual void display_area()=0;
};
class Triangle : public Shape
{
     public:
     void display_area()
     {
          cout<<"Area of triangle is : "<<get_l1()*get_l2()/2<<endl;
     }
};
class Rectangle : public Shape
{
     public:
     void display_area()
     {
          cout<<"Area of rectangle is : "<<get_l1()*get_l2()<<endl;
     }
};
int main()
{
     Triangle t;
     Rectangle r;
     t.setdata(24,10);
     t.display_area();
     cout<<endl;
     r.setdata(3,8);
     r.display_area();
     return 0;
}
