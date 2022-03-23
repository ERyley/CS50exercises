#include <stdio.h>

void over_18(void);

int main()
{
    int myAge;

    printf("How old are you?\n");
    scanf("%d", &myAge);

    if (myAge < 18)
    {
        printf("Get some fake ID kid");
    } 
    else
    {
        over_18();
    }
    return 0;
}

void over_18(void)
{
    char myDrink[255];
    printf("What do you want to drink?\n");
    scanf("%s", &myDrink);
    printf("Here you go, one %s", myDrink);
}
