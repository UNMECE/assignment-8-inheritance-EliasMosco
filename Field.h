#pragma once
#include <ostream>

#ifndef FIELD_H
#define FIELD_H
class Field
{
private:
    double *FeildStrength;
public:

    double PI;
    Field();
    Field(double x, double y, double z);
    Field(const Field &other);
    Field& operator=(const Field& other);

    ~Field();
    void setX(double x) { FeildStrength[0] = x; }
    void sety(double y) { FeildStrength[1] = y; }
    void setz(double z) { FeildStrength[2] = z; }
    double getX() const { return FeildStrength[0]; }
    double gety() const { return FeildStrength[1]; }
    double getz() const { return FeildStrength[2]; }
    double innerProduct() const;
    void printMagnitude() const;
};
#endif
