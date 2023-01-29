
/*
Taylor Nilsen
0702201
Lecture 10b
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts
*/
#include <iostream>
int cubeIt(int num);
int product(int num1, int num2);
double sum(double num1, double num2, double num3);
using namespace std;

int main(){
    int val,a,b,c,d,e;
    cout << "Please enter a number to cube: " << endl;
    cin >> val;
    cout << "Your number cubed is: " << cubeIt(val) << endl;

    cout << endl << endl << "please enter 2 number to multiply: " << endl;
    cin >> a >> b;
    cout << "Your numbers multiplied are: " << product(a, b) << endl;

    cout << endl << endl << "please enter 3 number to add: " << endl;
    cin >> c >> d >> e;
    cout << "Your numbers added are: " << sum(c, d, e) << endl;
    return 0;
}

int cubeIt(int num) {


    return num*num*num;
}

int product(int num1, int num2){
    return num1*num2;
}

double sum(double num1, double num2, double num3){
    return num1+num2+num3;
}