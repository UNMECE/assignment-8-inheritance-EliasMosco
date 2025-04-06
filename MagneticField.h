#pragma once

#include "Field.h"


class MagneticField : public Field
{
private:
    double CalculatedB;
public:
    MagneticField();
    MagneticField(double x, double y, double z);
    void CalculateMagneticField(double I, double r);
    MagneticField operator+(const MagneticField &other) const;
    MagneticField& operator=(const MagneticField &other) ;
    friend std::ostream& operator<<(std::ostream& os, const MagneticField& mf);
    double getB() const;
    ~MagneticField()=default;
};

