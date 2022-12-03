#include<iostream>
using namespace std;
class num
{
   private:
        int n;
   public:
     num(int n):n(n){}
     void display()
     {
          cout<<n<<" ";
     }
      void  swap(num  *a)
     {  int temp;
               temp=n;
               n=a->n;
               a->n=temp;
     }
};
int main()
{
     num s1(40),s2(50);
     s1.display();
     s2.display();
     cout<<endl;
     s1.swap(&s2);
     s1.display();
     s2.display();
     cout<<endl;
     return 0;
}
