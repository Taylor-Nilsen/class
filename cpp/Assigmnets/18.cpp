/*
Taylor Nilsen
0702201
18
4 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
I tinkered with the code to make it work, but I'm not sure if it's correct. I was and am still trying to figure out how to make the winners print out. Any help would be appreciated.
*/
#include <iostream>
#include <ctime>
using namespace std;

int removeChar(char *str, char c);

int main(){
    char str[100];
    char c;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter a character to remove: ";
    cin >> c;
    removeChar(str, c);
    cout << str << endl;
    return 0;
}

int removeChar(char *str, char c){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == c){
            for(int j = i; str[j] != '\0'; j++){
                str[j] = str[j+1];
            }
        }
        else{
            i++;
        }
    }
}

