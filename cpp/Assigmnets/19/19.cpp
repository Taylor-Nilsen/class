/*
Taylor Nilsen
0702201
18
5 December 2022
Apply the program development process to problems that are solved using fundamental C++ programming constructs and predefined data structures.

I was really having trouble running the code is VSCode. I was unsure on why it wasnt running. I think it has something to do with it being more than one file. If you have seen this before, please let me know. I would really appreciate it.
*/
#include <iostream>
#include "ToDo.h"

using namespace std;

MyToDo ToDoList[MAXLIST];
int head = 0, tail = 0;

bool addToList(const MyToDo &td)
{
    if (tail == MAXLIST)
        return false;
    ToDoList[tail++] = td;
    return true;
}
bool addToList(string description, string &date, int priority)
{
    if (tail == MAXLIST)
        return false;
    ToDoList[tail].description = description;
    ToDoList[tail].dueDate = date;
    ToDoList[tail++].priority = priority;
    return true;
}
bool getNextItem(MyToDo &td)
{
    if (head == tail)
        return false;
    td = ToDoList[head++];
    return true;
}
bool getNextItem(string &description, string &date, int &priority)
{
    if (head == tail)
        return false;
    description = ToDoList[head].description;
    date = ToDoList[head].dueDate;
    priority = ToDoList[head++].priority;
    return true;
}
bool getByPriority(MyToDo list[], int priority, int &count)
{
    count = 0;
    for (int i = head; i < tail; i++)
        if (ToDoList[i].priority == priority)
            list[count++] = ToDoList[i];
    return count > 0;
}
void printToDo()
{
    for (int i = head; i < tail; i++)
        cout << ToDoList[i].description << " " << ToDoList[i].dueDate << " " << ToDoList[i].priority << endl;
}