/*
Taylor Nilsen
0702201
Lecture 11b
20 November 2022
Decompose a program into subtasks and use parameter passing to exchange information between the subparts
*/
#include <iostream>
using namespace std; 
void getInts(int& a , int & b);
void sort(int& a, int& b, bool descend = true)
void SWAP(int& a , int & b);

int main(){
    int x, y;
    getInts(x, y);

    cout << " X : "<< x << "\t and Y: " << y<< endl;\
    
    SWAP(x,y);
    cout << "Swapped they are\t X : "<< x << "\t and Y: " << y<< endl;\
    
    sort(x,y);
    cout << "sorted decending they are\t X : "<< x << "\t and Y: " << y<< endl;\
    
    sort(x,y, false);
    cout << "sorted ascending they are\t X : "<< x << "\t and Y: " << y<< endl;\
    
    return 0;
}

void getInts(int& a , int &b){
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    return;
}

void SWAP(int& a, int& b) {
    int tmp = a;
    a=b;
    b=tmp;
    return;
}

void sort(int& a, int& b, bool descend) {
    if(descend) {
        if (a<b) {
            SWAP(a,b);

        }
    } else {
        if (a>b) {
            SWAP(a,b);
        }
    }
}