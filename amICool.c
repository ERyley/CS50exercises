#include <stdio.h>
#include <string.h>


int main()
{
    char answer[255];

    printf ("Is coding cool?\n");
    scanf ("%s", &answer);
    while (1 == 1)
    {
        if(!strcmp(answer,"yes") || !strcmp(answer,"y") || !strcmp(answer,"Yes") || !strcmp(answer,"Y"))
        {
            printf ("So are you!");
            break;
            return 0;
        }
        printf("Sorry, I dont think you heard me. I said, Is coding cool?\n");
        scanf ("%s", &answer);
    }
    
}
