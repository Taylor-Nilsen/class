/*
Taylor Nilsen
0702201
Lecture 10b
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts
*/
#include <iostream>
// global varuiables make it so that you cannot see where eah variable is contained and it allows other problems
void getX();
void printX();

using namespace std;
int x = 0;

int main() {
    int x = 6
    getX();
    

    return 0;
}

void printX(){
    int x = 45;
    cout << "The value of X is : " << x << endl;
    return;
}
void getX() {
    int x;
    cout << "Enter a value for X" << endl;
    cin >> x;
    
    return;
}