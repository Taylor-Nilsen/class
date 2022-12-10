#include <iostream>
using namespace std;
void strMetric(string s, int &upperCaseCount, int &lowerCaseCount);
int main(){
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    string s;
    cout << "Enter a string: ";
    cin >>  s;
    strMetric(s, upperCaseCount, lowerCaseCount);
    cout << "The number of upper case characters in the string is: " << upperCaseCount << endl;
    cout << "The number of lower case characters in the string is: " << lowerCaseCount << endl;
    return 0;
}

void strMetric(string s, int &upperCaseCount, int &lowerCaseCount){
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upperCaseCount++;
        }
        else if (islower(s[i]))
        {
            lowerCaseCount++;
        }
    }
}

