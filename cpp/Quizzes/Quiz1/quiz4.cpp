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
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num % 2 == 0){
        cout << "Even";
    }
    else if (num % 2 != 0){
        cout << "Odd";
    }
    else {
        "error";
    }



    return 0;
}