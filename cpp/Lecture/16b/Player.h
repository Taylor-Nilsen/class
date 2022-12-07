#pragma once
#include <string>
using std::string;

class Player{
private:
    string name;
    double average;
    double slug;
public:
    void setPlayer(string name, double avg);
    double getAverage();
    double getSlug();
    string getName();
};