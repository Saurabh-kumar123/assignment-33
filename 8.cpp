#include<iostream>
#include<math.h>
using namespace std;
class Proof
{
   protected:
   int a,b;
   public:
   Proof(int a,int b):a(a),b(b){}
   virtual void calculate()=0;
};
class compute:public Proof
{
   int c,d;
   public:
   compute(int a,int b):Proof(a,b){}
    void calculate()
    {
        c=a*a+b*b;
        d=sqrt(c);
        if(pow(d,2)==(a*a+b*b))
        cout<<"this triangle is right angle triangle"<<endl;
        else
        cout<<"this is not right angle triangle"<<endl;
    }  
};
int main()
{
    compute c(12,5);
    c.calculate();
    return 0;
}