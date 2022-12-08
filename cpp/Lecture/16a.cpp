/*
Taylor Nilsen
<<<<<<< HEAD
0702201
Lecture 16a
6 December 2020
Differentiate between object-oriented, structured, and functional programming methodologies.
=======
ID: 0702201
7 December, 2022
16a
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
>>>>>>> f2dd9810efd02fe48ea7e6e9f13b0e0817949407
*/
#include <iostream>
using namespace std;

int main(){
    int* ptr;
    int ar[] = {3,2,3,4,5,7,12,10,9,2};
    ptr = &ar[10];
    for (int i = 0; i < 7; i++){
        cout << *ptr-- << endl;
    }
    return 0;
}#include <iostream>
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
