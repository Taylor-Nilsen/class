/*
Taylor Nilsen
0702201
17
4 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.
I tinkered with the code to make it work, but I'm not sure if it's correct. I was and am still trying to figure out how to make the winners print out. Any help would be appreciated.
*/
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
        cout << "Enter a Position " << endl;
        cin >> x >> y;
        markSpace (board, x, y);
        count++;
        finished = gameOver(board, winner);
        if(finished && count < 9 ){
            cout << winner << "Wins!" << endl;
        }
        else if(!finished && count == 9){
            cout << "Tie Game " << endl;
            break;
        }
    }
    return 0;
}
bool markSpace(char bd[][3], int row, int col){
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
                    return false;
}
void createGameBoard (char bd[][3]){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            bd[row][col] = '-';
        }
    }
}
void printBoard (char bd[][3]){
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << bd[row][col] << "\t";
        }
        cout << endl << endl;
    }
}
bool gameOver(char game[][3], char &whoWon){
    char winner = ' ';

    if(game[0][0] != '-' && game [0][0] == game [1][1] && game [1][1] == game [2][2]){
        winner = game[0][0];
    }
    else if (game[2][0] != '-' && game [2][0] == game [1][1] && game [1][1] == game [0][2]){
        winner = game[2][0];
    }
    else{
        for(int row = 0; row < 3; row++){
            if (game[row][0] != '-' && game[row][0] == game[row][1] && game[row][1] == game[row][2]){
                winner = game[row][0];
                break;
            }
            else if (game[0][row] != '-' && game[0][row] == game[1][row] && game[1][row] == game[2][row]){
                winner = game[0][row];
                break;
            }
        }
    }
    if (winner == ' '){
        return false;
    }
    else{
        whoWon = winner;
        return true;
    }
}