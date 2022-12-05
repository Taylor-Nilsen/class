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
