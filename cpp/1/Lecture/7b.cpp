/*
Taylor Nilsen
ID: 0702201
October 29, 2022
7b
Design and create algorithms for solving simple problems.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    char yorn;
    cout << "do you want to play the game, y n" << endl;
    cin >> yorn;
    while(yorn == 'y') {
    yorn = 'a';
    srand(static_cast<unsigned int>(time(0)));

    int count = 1;
    int num = rand() % 10 + 1;
    cout << "Guess a number between 1 and  10" << endl;
    int guess;
    cin >> guess;

    while (guess != num) {
        count++;

        cout << "guess a number between 1 and 10" << endl;
        cin >> guess;

    }
    cout << "It took " << count << " guesses to guess correctly" << endl;
    cout << "do you want to play again, y n" << endl;
    cin >> yorn;
    }


    return 0;
}