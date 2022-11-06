/*
Taylor Nilsen
ID: 0702201
Nov 6 2022
Quiz 1
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int value;
    char operation;

    cout << "Enter an expression" << endl;
    cin >> operation >> value;

    if (operation == 'T') {
        cout << "Output: " << tan(value) << endl;
    }
    else if (operation == 'S') {
        cout << "Output: " << sin(value) << endl;
    }
    else if (operation == 'C') {
        cout << "Output: " << cos(value) << endl;
    }
    else {
        cout << "try again";
    }
    return 0;
}