/*
Taylor Nilsen
ID: 0702201
October 29, 2022
lab 7
Design and create algorithms for solving simple problems.

I reorganized the code to  bue cleaner, as well as altering certain portions to make sense of it
*/

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int total;
    int small;
    int large;
    int num;
    cout << "How many numbers do you want to enter" << endl;
    cin >> total;
    cout << "enter a number" << endl;
    cin >> num;
    large = num;
    small = num;
    for(int i = 1; i < total; i++) {
        cout << "enter a number" << endl;
        cin >> num;
        if(num > large) large = num;
        if(num < small) small = num;
    }
    cout << "the largest number was " << large << endl;
    cout << "the smallest number was " << small << endl;


    return 0;
}