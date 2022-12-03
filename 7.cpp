#include<iostream>
using namespace std;
class matrix
{
    protected:
    int a,b,c,d;
    public:
    matrix(int a,int b,int c,int d)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
};
class cal_diterminent:public matrix
{
     public:
     cal_diterminent(int a,int b,int c,int d):matrix(a,b,c,d){}
     int calculatedeter()
     {
        return(a*d-b*c);
     }
     void display()
     {
        cout<<"Determinent  :  "<<calculatedeter()<<endl;
     }
};
int main()
{
    cal_diterminent c(5,3,4,5);
    c.display();
    return 0;
}