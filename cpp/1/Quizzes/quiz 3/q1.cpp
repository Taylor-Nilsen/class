#include <iostream>
#include <string>
using namespace std;

int countDigits(string s);


int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "The number of digits in the string is: " << countDigits(s) << endl;
    return 0;
}

int countDigits(string s){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            count++;
        }
    }
    return count;
}