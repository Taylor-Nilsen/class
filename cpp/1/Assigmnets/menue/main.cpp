#include <iostream>
#include <cstdlib>

using namespace std;
#include "menu.h"

void func1();
void func2();
void func3();
void Exit();

int main(){
    Menu m;
    m.addMenu("1. Function1", func1);
    m.addMenu("2. Function2", func2);
    m.addMenu("3. Function3", func3);
    m.addMenu("4. Exit", Exit);

    m.runMenu();
}
void func1(){
    char c;
    cout << "Hello From Function 1";
    cin >> c;
}
void func2(){
    char c;
    cout << "Hello From Function 2";
    cin >> c;
}
void func3(){
    char c;
    cout << "Hello From Function 3";
    cin >> c;
}
void Exit(){
    cout << "Good Bye" >> endl;
    exit(0);
}