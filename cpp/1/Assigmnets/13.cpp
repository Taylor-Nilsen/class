/*
Taylor Nilsen
0702201
13
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts


I Broke the problem apart trying to understand the "case" operator so that i can use it in the future.
I also added a more helpfull error code and changed some of the ourputs to make it more intutitive.
*/
#include <iostream>
using namespace std;

bool decode(string s, int &a, int &b, int &c);
const int LENGTH = 9;

int main() {
    string s;
    int num1, num2, num3;

    cout << "Enter a sequence to decode" << endl;
    cin >> s;
    bool status = decode(s, num1, num2, num3);
    if(status)
    {
        cout << "Your sequence decoded is " << endl;
        cout << "Section 1 = " << num1 << endl;
        cout << "Section 2 = " << num1 << endl;
        cout << "Section 3 = " << num1 << endl;
    }
    
    
    return 0;
}

bool decode(string s, int &a, int &b, int &c){
    if(s.length() != LENGTH) {
        cout << "String Length ERROR";
        return false;
    }
    a=b=c=0;

    for(int i = 0;
        i< s.length();
        i++) {
        if(i<3){
            a+= static_cast<int>(s.at(i));
        }
        else if (i<6){
            b+= static_cast<int>(s.at(i));
        }
        else {
            c+= static_cast<int>(s.at(i));
        }
    }
    return true;
}