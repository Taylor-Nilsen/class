



    
        #include <iostream>
        #include <string>
        using namespace std;
        
        int sumFirstChar(string str);
        
        int main(){
            string str;
            cout << "enter a string: ";
            getline(cin, str);
            cout << sumFirstChar(str) << endl;
            return 0;
        }
        
        int sumFirstChar(string str){
            int sum = 0;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == ' ')
                {
                    sum += str[i + 1];
                }
            }
            return sum;
        }