/*
Taylor Nilsen
ID: 0702201
Nov 6 2022
Quiz 1
*/

#include <iostream>
using namespace std;

int main(){
    char myChar;
    char letter;
    int increment;

    cout << "Enter a character" << endl;
    cin >> myChar;
    letter = myChar;
    cout << "Enter a value to increment by" << endl;
    cin >> increment;

    cout << "Your character incremented is " << letter + increment << endl;

    return 0;
}