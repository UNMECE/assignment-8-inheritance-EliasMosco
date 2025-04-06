#include<iostream>
#include<iomanip>
#include"ElectricField.h"
#include"MagneticField.h"
#include"Field.h"
using namespace std;
int main(int argc, char const *argv[])
{

    ElectricField e1, e2(0.1,1e5,1e3), e3(0.0,1e5,0.0);
    MagneticField m1, m2(1.2,2.2,0.9), m3(0.5,0.5,1.5);
    e2 = e2 + e3;
    m1 = m2 + m3;

    e1.CalculateElectricField(0.001, 1000);
    m1.CalculateMagneticField(1000, 2);
    cout << "the Electric Field e1 is in direction " << e1 
    << " with a artifical charge with a strength of" << endl << "0.001 Coulmbs" << endl << "placed at radius: "<<endl<<
    "1000"<<endl <<"has a Calculated strength of "
    <<endl << e1.getE()
    <<" Coulmbs" << endl;
    
    cout << "when we measure the magnetic field of the same spot radially, but instead run a current of 1000 Amps instead, we find"
    <<endl << "the Magnetic feild with direction " <<m1 << "at radius 2 has a strength of: " << m1.getB() << " Amperes." << endl;

}

