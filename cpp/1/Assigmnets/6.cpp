/*
Taylor Nilsen
ID: 0702201
October 29, 2022
7b
Design and create algorithms for solving simple problems.
*/

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int num, num0;
    char op;
    cout << "Input a Calculation" << endl;
    cin >> num >> op >> num0;

    if (op == '+') {
        cout << num + num0;
    }
    if (op == '-') {
        cout << num - num0;
    }
    if (op == '*') {
        cout << num * num0;
    }
    if (op == '/') {
        cout << num / num0;
    }


    return 0;
}