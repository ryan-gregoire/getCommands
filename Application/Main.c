#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Main.h"

void getCalculated()
{

    struct getCommand c;
    c.id = getID();

    printf("Your ID is: %d\n", c.id);
    printf("-------------------------");
    printf("Enter First Name: ");
    printf("-------------------------");
    printf("\n");
    scanf("%s", c.fName);

    printf("-------------------------");
    printf("Enter Last Name: ");
    printf("-------------------------");
    printf("\n");
    scanf("%s", c.lName);
    printf("Hello I am  %s %s \n", c.fName, c.lName);
}

int main()
{

    getCalculated();
    return 0;
}