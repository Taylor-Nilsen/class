/*
Taylor Nilsen
ID: 0702201
October 29, 2022
8
Design and create algorithms for solving simple problems.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    char yorn;
    int coin;
    int guess;
    int bank = 10;
    cout << "do you want to play the game, y n" << endl;
    cin >> yorn;
    while(yorn == 'y') {
    yorn = 'a';
    srand(time(0));
    
    cout << "You have $" << bank << endl;
    cout << "heads, 1; or tails, 2;?" << endl;
    coin = rand() % 2;
    cin >> guess;
    if (guess == coin){
        bank += 2;
    }
    else
        bank -= 1;
    }
    cout << "You have $" << bank << endl;

    cout << "do you want to play again, y n" << endl;
    cin >> yorn;

    


    return 0;
}