#include <iostream>
using namespace std;

int largest(int a, int b);
int largest(int a, int b, int c);

int main(){
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "The largest of the first two integers is: " << largest(a, b) << endl;
    cout << "The largest of the three integers is: " << largest(a, b, c) << endl;
    return 0;
}

int largest(int a, int b){
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int largest(int a, int b, int c){
    return largest(largest(a, b), c);
}

