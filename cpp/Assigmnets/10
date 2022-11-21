/*
Taylor Nilsen
0702201
12
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts


I Broke the problem apart trying to understand the "case" operator so that i can use it in the future.*/
#include <iostream>
#include <cmath>
using namespace std;

double pythag(double val1, double val2, char side);

int main (){
    double a, b, c;
    cout << "Pythagorean theorem, Enter sides A and B and I will solve for C" << endl; 
    cin >> a >> b;

    c = pythag(a, b, 'c');

    cout << "side C is equal to " << c << endl;

    cout << "Now enter sides B and C and I will solve for A " << endl;
    cin >>b >> c;
    a = pythag(b, c, 'a');

    cout << "Side A is equal to " << a << endl;
    cout << "Finally, enter sides A and C and I will solve for B" << endl; 
    cin >> a >> c;

    b = pythag(a, c, 'b');
    cout << "Side B is equal to " << b << endl;
    return 0;



    return 0;
}
double pythag(double val1, double val2, char side) {
    double solution = 0.0;
    switch(toupper(side)) {

    case 'C':
        solution = sqrt(pow(val1, 2.0)+ pow(val2, 2.0));
        break;
        
    case 'A':

    case 'B':
        solution = sqrt(pow(val2, 2.0)- pow(val1, 2.0));
    }
    return solution;

}