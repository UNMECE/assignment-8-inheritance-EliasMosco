#include "MagneticField.h"
#include <ostream>
#include<iomanip>


void MagneticField::CalculateMagneticField(double I, double r){
    double MU_0 = 4 * PI * 1e-7;  // Vacuum permeability

    CalculatedB = I / 2 * PI *r * MU_0;}
    
    MagneticField MagneticField::operator+(const MagneticField &other) const {
        return MagneticField(this->getX() + other.getX(), 
        this->gety() + other.gety(), this->getz() + other.getz());
        
    }
    MagneticField& MagneticField::operator=(const MagneticField& other) {
        if (this != &other) {
            Field::operator=(other);
            CalculatedB = other.CalculatedB;
        }
        return *this;
    }
        std::ostream& operator<<(std::ostream& os, const MagneticField& mf) {
        os << "(" << mf.getX() << ", " << mf.gety() << ", " << mf.getz() << ")";
        return os;
    }
    MagneticField::MagneticField() : Field(), CalculatedB(0.0) {}
    MagneticField::MagneticField(double x, double y, double z) 
    : Field(x, y, z), CalculatedB(0.0) {}


    double MagneticField::getB() const{ return CalculatedB; }
