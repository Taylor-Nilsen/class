#include <iostream>
int cubeIt(int num);
product(int num1, num2);
using namespace std;

int main(){
    int val,a,b;
    cout << "Please enter a number to cube: " << endl;
    cin >> val;
    cout << "Your number cubed is: " << cuubeIt(val) << endl;

    cout << endl << endl << "please enter 2 number to multiply: " << endl;
    cin >> a >> b;
    cout << "Your numbers multiplied are: " << product(a, b) << endl;
    return 0;
}

int cubeIt(int num) {


    return num*num*num;
}

int product(int num1, num2){
    return num1*num2;
}