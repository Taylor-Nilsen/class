#pragma once
#include <string>
using std::string;

class Player{
private:
    string name;
    double average;
public:
    void setPlayerAverage(string name, double avg);
    void printPlayerAverage();
    string getName();
};
}