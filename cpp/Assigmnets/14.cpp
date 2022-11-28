/*
Taylor Nilsen
0702201
14
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts

I broke the code apart into pieces i could understand, Now i will be able to apply these priniples to future assignments*/
#include <iostream> 
#include <string>
using namespace std;

int sumAscii (string a);
int sumAscii(string a, string b);

int main(){
    string s1, s2;
    cout << "Enter two strings" << endl;
    cin >> s1 >> s2;
    cout<<"The sum of the ascii characters in both strings is " << sumAscii (s1, s2) << endl;
    return 0;
}
int sumAscii(string a){
    int sum = 0;
    for(int i = 0; i < a.length(); i++){
        sum+=static_cast<int>(a.at(i));
    }
    return sum;
}

int sumAscii(string a, string b) {
    return sumAscii(a) + sumAscii(a);
}