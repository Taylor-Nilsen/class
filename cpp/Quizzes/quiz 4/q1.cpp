/*
Taylor Nilsen
ID: 0702201
9 December, 2022
*/
#include <iostream>
using namespace std;

double avgEvens(int arr[], int size);

int main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
    cout << "enter 10 numbers: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    int arr[] = { a, b, c, d, e, f, g, h, i, j };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << avgEvens(arr, size) << endl;
    return 0;
}

double avgEvens(int arr[], int size){
    double sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    return sum / count;
}
