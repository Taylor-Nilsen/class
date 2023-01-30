#indef Menue
#define Menue
const int MAXCOUNT = 20;
struct menuItem
{
    void (*function)();
    char decript[50];

};
class Menue{
private:
    menuItem mi[MAXCOUNT];
    int count;
    void runSelection();
public:
    Menu();
    void addMenu(char *Description, void (*f)());
    void runMenue();
};




#endif