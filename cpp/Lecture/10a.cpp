#include <iostream>
int getval(), sqrval(), cubval();
using namespace std;
double Value, Number, square, cube;

int main(){
    square = sqrval();
    cube = cubval();
    cout << "Your Number Squared is: " << square << endl;
    cout << "Your Number Cubed is: " << cube << endl;
    return 0;
}

int getval(){
    cout << "Enter a Value: ";
    cin >> Value;
    return Value;
}

int sqrval(){
    Number = getval();
    return Number * Number;
}

int cubval(){
    return Number * Number * Number;
}