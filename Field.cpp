#include "Field.h"
#include<iostream>
#include <iomanip>
double PI = 3.141592653589793;

Field::Field() {
    FeildStrength = new double[3]{0.0, 0.0, 0.0};
}

// Parameterized constructor
Field::Field(double x, double y, double z) {
    FeildStrength = new double[3]{x, y, z};
}
Field::Field(const Field &other) {
    FeildStrength = new double[3];
    for (int i = 0; i < 3; ++i)
    FeildStrength[i] = other.FeildStrength[i];
}
Field& Field::operator=(const Field& other) {
    if (this != &other) {
        for (int i = 0; i < 3; ++i)
            FeildStrength[i] = other.FeildStrength[i];
    }
    return *this;
}



Field::~Field() {
    delete[] FeildStrength;
}
double Field::innerProduct() const {
    return FeildStrength[0]*FeildStrength[0] + FeildStrength[1]*FeildStrength[1] + FeildStrength[2]*FeildStrength[2];
}

void Field::printMagnitude() const {
    std::cout << "[" << FeildStrength[0] << ", " << FeildStrength[1] << ", " << FeildStrength[2] << "]\n";
}
