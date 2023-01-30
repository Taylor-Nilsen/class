#include <iostream>
#include <cstdlib>

using namespace std;

#include "menu.h"

Menue::Menue()
: count (0)
{
    
}

void Menu::addMenu(char *Description, void (*f) (void)){
    if (count < MAXCOUNT)
    {
        this->mi[count].func = f;
        strcpy(this->mi[count].descript, Description);
    }
}
void Menu::runMenu(){
    for (;;){
        system("CLS");
        for(int i = 0; i < count; i++)
        {
            cout << this->mi[i].descript << endl;
        }
        runSelection();
    }
}
void Menu::runSelection(){
int select;
    cin >> select;
    if(select <= count){
        this->mi[select - 1].func();
    }
}