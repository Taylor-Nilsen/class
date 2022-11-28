#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int sumConsonants (char letter_1, char letter_2);
bool isVowel(char c);

int main(){
    char first, second;
    
    cout << "Enter 2 Upper Case Letters" << endl;
    cin >> first >> second;
    int sum = sumConsonants (first, second);
    
    if (sum == -1){
        cout << "error";
    }
        
    else {
        cout << "The consonants between your letters add to " << sum;
    }
    
    
    return 0;
}

int sumConsonants(char letter_1, char letter_2){
    int sum = 0;
    
    char small = letter_1 < letter_2 ? letter_1 : letter_2;
    char big = letter_1 > letter_2 ? letter_1 : letter_2;
    
    if(!isupper(small) || isupper(big))
        return -1;
    
    for(char i = small; i <= big; i++){
        if(!isVowel(i)){
            sum+= static_cast<int>(i);
        }
    }
    return sum;
}

bool isVowel(char c){
    char ch = toupper(c);
    
    if(ch=='A' || ch=='U' || ch=='I' || ch=='O' || ch=='U'){
        return true;
    }
    else {
        return false;
    }
}
