#pragma once
#include "Field.h"
#include <ostream>

class ElectricField : public Field {
private:
    double Calculated_E;
public:
    double getE() const;  // Added const
    ElectricField();
    ElectricField(double x, double y, double z);
    ~ElectricField() = default;  // Fixed destructor
    
    void CalculateElectricField(double Q, double r);
    ElectricField operator+(const ElectricField& other) const;
    ElectricField& operator=(const ElectricField& other);
    friend std::ostream& operator<<(std::ostream& os, const ElectricField& ef);
};