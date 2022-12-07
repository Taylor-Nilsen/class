/*
Taylor Nilsen
0702201
Lecture 16a
6 December 2020
Differentiate between object-oriented, structured, and functional programming methodologies.
*/
#include <iostream>
#include <string>

using namespace std;

struct Player
{
    string name;
    double average;
};

void getPlayerAverage(Player* plr);
void printPlayerAverage(const Player& p);

int main(){
    Player p[3];
    for (int i = 0; i < 3; i++){
        getPlayerAverage(&p[i]);
        printPlayerAverage(p[i]);
    }
    return 0;
}
void getPlayerAverage(Player* plr){
    cout << "Enter player name: ";
    getline(cin, plr->name);
    cout << "Enter player average: ";
    cin >> plr->average;
}
void printPlayerAverage(const Player& p){
    cout << "Player name: " << p.name << endl;
    cout << "Player average: " << p.average << endl;
}
