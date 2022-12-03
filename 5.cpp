#include<iostream>
#include<math.h>
using namespace std;
class Photon
{ 
    protected:
    double wavelength;
    Photon(double wavelength)
    {
        this->wavelength=wavelength*pow(10,-10);
    }
};
class cal_photon_energy: public Photon
{
   private: 
     double E;
     public:
     cal_photon_energy(double cal_photon_energy):Photon(cal_photon_energy)
     {}
     void calculatephotonenergy()
     {
        E=6.626*pow(10,-34)*3*pow(10,8)/wavelength;
        cout<<"Photon Energy is  :  "<<E<<endl;
     }
};
int main()
{
    cal_photon_energy c(0.50);
    c.calculatephotonenergy();
    return 0;
}

