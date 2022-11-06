/*
Taylor Nilsen
ID: 0702201
Nov 6 2022
Quiz 1
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    int catage;

    cout << "Enter your cats age in years" << endl;
    cin >> age;

    if (age == 1) {
        catage = 15;
    }

    if (age == 2) {
        catage = 25;
    }

    if (age > 2 ) {
        catage = 25 + 4*(age -2);
    }

    cout << "Your cat is " << catage << " years old in cat age";
}
