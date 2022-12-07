/*
Taylor Nilsen
ID: 0702201
7 December, 2022
15b
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
*/
#include <iostream>
using namespace std;

int main(){
    int* ptr;
    int ar[] = {3,2,3,4,5,7,12,10,9,2};
    ptr = &ar[10];
    for (int i = 0; i < 7; i++){
        cout << *ptr-- << endl;
    }
    return 0;
}#include <iostream>
using namespace std;

int xChar(char *str, char change);

int main (){
    char s[] = "Abc12efg345jkl234";
    char changeChar = 0;
    cout << "What letter do you want outputed as an 'X' ? ";
    cin >> changeChar;
    xChar(s, changeChar);
    cout << s << endl;

    return 0;
}

int xChar(char *str, char change){
    char* p = str;
    int count = 0;
    while (*p){
        if (*p == change){
            *p = 'X';
            count++;
        }
        p++;
    }
    return count;
}