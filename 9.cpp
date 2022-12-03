#include<iostream>
#define pi 3.14
using namespace std;
class Volume
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
class Cube : public Volume
{
     public:
     void display_area()
     {
          cout<<"volume of cube is : "<<l1*l1*l1<<endl;
     }
};
class Sphere : public Volume
{
     public:
     void display_area()
     {
          cout<<"volume of sphere  : "<<l1*l1*l1*pi*1.33<<endl;
     }
};
int main()
{
     Cube t;
     Sphere r;
     t.setdata(4);
     t.display_area();
     cout<<endl;
     r.setdata(3);
     r.display_area();
     cout<<endl;
     return 0;
}
