/*
Taylor Nilsen
ID: 0702201
October 29, 2022
7a
Design and create algorithms for solving simple problems.
*/
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int max, min;
    cout << "enter a max and a min" << endl;
    cin >> max >> min;
    srand(static_cast<unsigned int>(time(0)));

    for(int i = 0; i < 25; i++) {
        cout << rand() % (1 + max - min) + min << endl;
    }
    return 0;

}