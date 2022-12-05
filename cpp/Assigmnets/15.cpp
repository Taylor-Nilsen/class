#include <iostream>
using namespace std;

void fillArray(int a[5][5], int rSize);
void printArray(const int a[5][5], int rSize);
int searchArray(const int a[5][5], int rSize);

int main(){
    int ar[5][5];
    fillArray(ar, 5);
    printArray(ar, 5);

    cout << "There are " << searchArray(ar, 5) << " even numbers."<< endl;

    return 0;
}
void fillArray(int a[5][5], int rSize){
    for (int row =0; row < rSize; row++){
        for(int col = 0; col < rSize; col++){
            a[row][col]=rand() %10 + 1;
        }
    }
}

void printArray(const int a[5][5], int rSize){
    for (int row = 0; row < rSize; row++) {
        for (int col = 0; col < rSize; col++){
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }
}

int searchArray(const int a[5][5], int rSize){
    int count = 0;
    for (int row = 0; row < rSize; row++){
        for (int col = 0; col < rSize; col++){
            if ((a[row][col])% 2 == 0){
                count++;
            }
        }
    }
    return count;
}
