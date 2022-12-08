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