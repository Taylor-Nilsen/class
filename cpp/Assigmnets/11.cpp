/*
Taylor Nilsen
ID: 0702201
October 29, 2022
11
Decompose a program into subtasks and use parameter passing to exchange information between the subparts.
I used the answer code, but i couldnt get it to work. I tried troubleshooting it, but i couldnt figure it out. If you could offer some guidance on how to fix it, that would be great.
*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int sumConsonants (char first, char last);
bool isVowel(char c);

int main(){
    char a, b;
    
    cout << "Enter 2 Upper Case Letters" << endl;
    cin >> a >> b;
    int sum = 0;
    sum = sumConsonants (a, b);
    if (sum == -1){
        cout << "Invalid input" << endl;
    }
    else{
        cout << "The sum of the consonants is between the two chars is " << sum << endl;
    }    
    
    return 0;
}

int sumConsonants(char first, char last){
    int sum = 0;
    char small;
    char large;
    if (first < last){
        small = first;
        large = last;
    }
    else if (first > last){
        small = last;
        large = first;
        int sum = 0;
    }
    else{
        return -1;
    }

    if(islower(small) or islower(large)){
        return -1;
    }

    for(char i = small; i <= large; i++){
        if(!isVowel(i)){
            sum+= static_cast<int>(i);
        }
    }
    return sum;
}

bool isVowel(char c){
    char ch = toupper(c);
    
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
        return true;
    return false;
}
