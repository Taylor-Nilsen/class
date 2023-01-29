/*
Taylor Nilsen
ID: 0702201
October 29, 2022
6a
Design and create algorithms for solving simple problems.
*/

#include <iostream>
using namespace std;

int main() {
    for(int row = 1; row <= 9; row ++) {

        for(int col = 1; col <= 9; col ++) {
            cout << row * col << "\t";

        }
        cout << endl;
    }
    return 0;
}