#include<iostream>
#define pi 3.14
using namespace std;
class Shape 
{
    protected:
    double l1,l2;
    public:
    void get_data(double l1,double l2)
    {
        this->l1=l1;
        this->l2=l2;
    }
    virtual void display_area()=0;
};
class Triangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Triangle is : "<<l1*l2*pi<<endl;
    }
};
class Rectangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Rectangel is : "<<l1*l2<<endl;
    }
};
int main()
{
    Triangle t;
    Rectangle r;
    t.get_data(4,7);
    t.display_area();
    cout<<endl;
    r.get_data(3,8);
    r.display_area();
    cout<<endl;
    return 0;
}