#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter two values" << endl;
    cin >> x >> y;

    if (x > y) 
        cout << x << " is the largest number" << endl;

    if (x < y) 
        cout << y << " is the largest number" << endl;

    if (x == y) 
        cout << "the numbers are the same" << endl;






        return 0; 
}