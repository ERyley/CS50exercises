#include <stdio.h>
#include <string.h>

/*helper function to avoid confusion with how strcmp works */

int areStringsEqual(char stringA[], char stringB[])
{
    return !strcmp(stringA, stringB);
}

int main()
{
    char answer[255];

    printf ("Is coding cool?\n");
    scanf ("%s", &answer);
    while (1 == 1)
    {
        if(areStringsEqual(answer,"yes") || areStringsEqual(answer,"y") || areStringsEqual(answer,"Yes") || areStringsEqual(answer,"Y"))
        {
            printf ("So are you!");
            break;
            return 0;
        }
        printf("Sorry, I dont think you heard me. I said, Is coding cool?\n");
        scanf ("%s", &answer);
    }
    
}
