#include <iostream>
using namespace std; 
void getInts(int& a , int & b);
void SWAP(int& a , int & b);

int main(){
    int x, y;
    getInts(x, y);

    cout << " X : "<< x << "\t and Y: " << y<< endl;\
    SWAP(x,y);
    cout << "Swapped they are\t X : "<< x << "\t and Y: " << y<< endl;\

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