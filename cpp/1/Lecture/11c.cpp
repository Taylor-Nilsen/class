/*
Taylor Nilsen
0702201
Lecture 11c
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts
*/
#include <iostream>
using namespace std;

int sumInt(int a, int b);
int sumInt(int a, int b, int c);
int sumInt(int a, int b, int c, int d);

int main() {
    int x, y, z, b;

    cout << "Enter 4 numbers: " << endl;
    cin >> x >> y >> z >> b;
    cout << "The sum of your numbers is: " << sumInt(x, y, z, b) << endl;

    return 0;
}

int sumInt(int a, int b) {
    return a + b;
}

int sumInt(int a, int b, int c) {
    return a + b + c;
}

int sumInt(int a, int b, int c, int d) {
    return a + b + c + d;
}