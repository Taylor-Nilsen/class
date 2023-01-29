/*
Taylor Nilsen
0702201
15
4 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/

#include <iostream>

using namespace std;
void fillArray(int ar[], int size);
void printArray(const int ar[], int size);
int searchArray(const int ar[], int rSize);

int main(){
    int ar[25];
    
    fillArray(ar, 25);
    printArray(ar, 25);
    cout << "There are x even numbers. x=" << searchArray(ar, 25);
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

int searchArray(const int ar[], int rSize){
    int count = 0;
    for (int i = 0; i < rSize; i++){
        if ((ar[i])% 2 == 0){
                count++;
            }
        }
    return count;
    }