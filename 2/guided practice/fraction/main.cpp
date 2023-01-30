#include <iostream>
#include "fraction.h"
using namespace std;

int main(){
    Fractionf1, f2, f3;
    f1.setFraction(1, 2);
    f2.setFraction(1, 3);
    f3 = f1.add(f2);
    f3.printfraction();

    return 0;
}