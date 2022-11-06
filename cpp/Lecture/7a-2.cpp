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
    int range, min;
    cout << "enter a range and a min" << endl;
    cin >> range >> min;
    srand(time(0));

    for(int i = 0; i < 25; i++) {
        cout << rand() % range + min << endl;
    }
    return 0;

}