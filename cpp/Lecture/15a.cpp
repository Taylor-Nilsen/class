/*
Taylor Nilsen
ID: 0702201
7 December, 2022
14a
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/
#include <iostream>
using namespace std;

int main(){
    int* ptr;
    int ar[] = {3,2,3,4,5,7,12,10,9,2};
    ptr = &ar[10];
    for (int i = 0; i < 7; i++){
        cout << *ptr-- << endl;
    }
    return 0;
}