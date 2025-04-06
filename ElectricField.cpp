#include <cmath>
#include "ElectricField.h"

double ElectricField::getE() const { return Calculated_E; }

ElectricField::ElectricField() : Field(), Calculated_E(0.0) {}
ElectricField::ElectricField(double x, double y, double z) 
    : Field(x, y, z), Calculated_E(0.0) {}

ElectricField ElectricField::operator+(const ElectricField& other) const {
    return ElectricField(
        this->getX() + other.getX(),
        this->gety() + other.gety(),
        this->getz() + other.getz()
    );
}

ElectricField& ElectricField::operator=(const ElectricField& other) {
    if (this != &other) {
        Field::operator=(other);
        Calculated_E = other.Calculated_E;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const ElectricField& ef) {
    os << "(" << ef.getX() << ", " << ef.gety() << ", " << ef.getz() << ")";
    return os;
}

void ElectricField::CalculateElectricField(double q, double r) {
    const double EPSILON_0 = 8.854e-12;
    Calculated_E = q / (4 * PI * r * r * EPSILON_0);
}