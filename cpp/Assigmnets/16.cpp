/*
Taylor Nilsen
0702201
16
4 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/
#include <iostream>
using namespace std;

void fill2DArray(int a[10][10], int rSize);
void print2DArray(const int a[10][10], int rSize);
int getDivisible(const int a[10][10], int rSize, int search);

int main(){
    int ar[10][10], val;
    fill2DArray(ar, 10);
    print2DArray(ar, 10);


    cout << "Enter the number you want to search for: ";
    cin >> val;

    cout << "Your number appears " << getDivisible(ar, 10, val) << " times."<< endl;

    return 0;
}
void fill2DArray(int a[10][10], int rSize){
    for (int row =0; row < rSize; row++){
        for(int col = 0; col < rSize; col++){
            a[row][col]=rand() %10 + 1;
        }
    }
}

void print2DArray(const int a[10][10], int rSize){
    for (int row = 0; row < rSize; row++) {
        for (int col = 0; col < rSize; col++){
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }
}

int getDivisible(const int a[10][10], int rSize, int search){
    int count =0;
    for (int row = 0; row < rSize; row++){
        for (int col = 0; col < rSize; col++){
            if (a[row][col] == search){
                count++;
            }
        }
    }
    return count;
}
