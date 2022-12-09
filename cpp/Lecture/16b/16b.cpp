/*
Taylor Nilsen
ID: 0702201
7 December, 2022
16b
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main(){
    Player p;
    p.setPlayer("Joe", 0.5, 0.6);
    cout << p.getName() << "\t" << p.getAverage() << endl;
    return 0;
}