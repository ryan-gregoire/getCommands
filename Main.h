
struct getCommand
{
    int id;
    char fName[2048];
    char lName[2048];
};

int getID()
{
    srand(time(0));
    return rand() % 100 + 1;
}
