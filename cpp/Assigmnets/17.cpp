#include <iostream>
#include <ctime>
using namespace std;

void printBoard (char bd[][3]);
void createGameBoard (char bd[][3]);
bool markSpace(char bd [][3], int row, int col);
bool gameOver (char game[][3], char &whowon);

int main(){
char board [3] [3];
bool finished = false;
int x,y;
int count = 0;
char winner = ' ';

    createGameBoard(board);
    printBoard (board);

    while(finished == false){
        cout << "Enter A position" << endl;
        cin >> x >> y;
        markSpace (board, x, y);
        count++;
        finished = gameOver (board, winner);
        if(finished && count < 9 ){
            cout << winner << "Wins!" << endl;
        }
        else if(!finished && count == 9){
            cout << "Tie Game" << endl;
            break;
        }
    }
    return 0;
}
bool markSpace(char bd [][3], int row, int col){
    static bool xTurn = false;
                    xTurn = !xTurn;

                    if(bd[row][col] == '-'){
                        if (xTurn){
                            bd[row][col] = 'X';
                        }
                        else {
                            bd[row][col] = 'O';
                        }
                        system("CLS");
                        return true;
                    }
                    retrun false;
}