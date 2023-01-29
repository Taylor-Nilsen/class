/*
Taylor Nilsen
ID: 0702201
November 27, 2022
13a
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/
#include <iostream>

using namespace std;
void fillArray(int ar[], int size);
void printArray(const int ar[], int size);
void printArrayBackwards(const int ar[], int size);

int main(){
    int ar[15];
    
    fillArray(ar, 15);
    
    printArray(ar, 15);
    
    printArrayBackwards(ar, 15);
    
    return 0;
}
void fillArray (int ar[], int size) {
    for (int i=0; i< size; i++){
        ar[i] = rand() % 10 + 1;
    }
    
}
void printArray(const int ar[], int size){
    for (int i=0; i < size; i++) {
        cout << ar[i] << endl;
    }
}

void printArrayBackwards(const int ar[], int size){
    for (int i=0; i > size; i--) {
        cout << ar[i] << endl;
    }
}