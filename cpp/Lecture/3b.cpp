/*
Taylor Nilsen
ID: 0702201
October 29, 2022
3b
This is the assignment after watching the video lecture
*/

#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "enter score" << endl;
    cin >> score;

    if (score >= 90) {
        cout << "You got and A" << endl;
    }

    else if (score >= 80) {
        cout << "You got and B" << endl;
    }

    else if (score >= 70) {
        cout << "You got and C" << endl;
    }

    else if (score >= 60) {
        cout << "You got and D" << endl;
    }

    else {
        cout << "You got and D" << endl;
    }

    return 0;
}