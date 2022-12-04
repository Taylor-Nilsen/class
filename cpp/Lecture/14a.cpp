#include <iostream>
using namespace std;

void fillArray(int a[5][5], int rSize);
void printArray(const int a[5][5], int rSize);
int searchArray(const int a[5][5], int rSize, int search);
int findInArray(const int a[5][5], int rSize, int search);

int main(){
    int ar[5][5], val;
    fillArray(ar, 5);
    printArray(ar, 5);


    cout << "Enter the number you want to search for: ";
    cin >> val;

    cout << "Your number appears " << searchArray(ar, 5, val) << " times."<< endl;
    cout << findInArray(ar, 5, val);

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

int searchArray(const int a[5][5], int rSize, int search){
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
int findInArray(const int a[5][5], int rSize, int search){
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