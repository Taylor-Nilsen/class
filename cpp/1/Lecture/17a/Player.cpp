#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

void Player::setPlayer(string name, double avg, double slg){
    this->name = name;
    this->average = avg;
    this->slug = slg;
}
double Player::getAverage(){
    return this->average;
}
double Player::getSlug(){
    return this->slug;
}
string Player::getName(){
    return this->name;
}