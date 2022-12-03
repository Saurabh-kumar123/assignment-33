#include<iostream>
using namespace std;
class Shape
{
protected:
     double l1,l2;
public:
     void setdata(int l1,int l2=0)
     {
          this->l1=l1;
          this->l2=l2;
     }
     int get_l1(){return l1;}
     int get_l2(){return l2;}
     virtual void display_area()=0;
};
class Square : public Shape
{
     public:
     void display_area()
     {
          cout<<"Area of square is : "<<get_l1()*get_l1()<<endl;
     }
};
class Parallelogram : public Shape
{
     public:
     void display_area()
     {
          cout<<"Area of parallelogram is : "<<get_l1()*get_l2()<<endl;
     }
};
int main()
{
     Square t;
     Parallelogram r;
     t.setdata(24);
     t.display_area();
     cout<<endl;
     r.setdata(3,8);
     r.display_area();
     cout<<endl;
     return 0;
}
