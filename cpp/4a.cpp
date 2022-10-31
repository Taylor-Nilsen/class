/*
Taylor Nilsen
ID: 0702201
October 29, 2022
4a
Derive program correctness through the development of sound test plans and the implementation of comprehensive test cases
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, menu;
    
    cout << "enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    cout << "please pick one" << endl
    << "1. Addition" << endl
    << "2. Subtraction" << endl
    << "3. Multiplication" << endl
    << "4. Division" << endl;

    cin >> menu;

    switch (menu) {
    case 1:
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        break; 
    case 2:
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
        break;
    case 3:
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
        break;
    case 4:
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
        break;
    default:
        cout << "please enter a valid selection" << endl;
        break;
    }

    return 0;
}