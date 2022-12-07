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
    Player p;
    
    getPlayerAverage(&p);
    printPlayerAverage(p);
    
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
