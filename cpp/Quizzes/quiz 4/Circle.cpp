#include <iostream>
#include "circle.h"
   
using namespace std;

double Circle::Default(){
    this -> diameter = 1;
    this -> radius = 1;
}
double Circle::Overloaded(){
    this -> diameter = .20373;
    this -> radius = .20373;
}

double Circle::setDiameter(double d){
    this -> diameter = d;
    return diameter;
}
double Circle::setRadius(double r){
    this -> radius = r;
    return radius;
}

double Circle::Area(){
    double area = 3.14 * (this -> radius * this -> radius);
    return area;
}

double Circle::calcDiameter(){
    double diameter = 2 * this -> radius;
    return diameter;
}
double Circle::circumference(){
    double circumference = 3.14 * this -> diameter;
    return circumference;
}