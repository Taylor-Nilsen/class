#pragma once
#include <iostream>

class Circle{
private:
    double diameter;
    double radius;
public:
    double Default();
    double Overloaded();

    double setDiameter(double d);
    double setRadius(double r);

    double Area();
    double calcDiameter();
    double circumference();
};