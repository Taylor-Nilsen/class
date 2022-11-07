/*
Taylor Nilsen
ID: 0702201
October 29, 2022
9
Design and create algorithms for solving simple problems.
*/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    double temp;
    char type;
    char out;

    cout << "this temperature conversion program converts other temperature types to Fahrenheit" 
    << endl << "the temperature types are:" << endl << "C - Celsius" << endl << "K - Kelvin" << endl 
    << "N - Newton" << endl << "X - Exit" << endl << endl << "input a value and a temperature type to be converted" << endl;
    cin >> temp >> type;

    if (type == 'C'){
        cout << temp * 9/5 + 32;
    }
    else if (type == 'K'){
        cout << (temp - 273.15) * 1.8000 + 32;
    }
    else if (type == 'N'){
        cout << temp * 60 / 11 + 32;
    }
    else if (type == 'X') {
        abort();
    }
    else cout << "error";

    return 0;
}