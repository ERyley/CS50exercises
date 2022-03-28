#include <stdio.h>

/* using an array to convert 1-10 into roman numerals */

void roman(int num);
int invalidNumber(int num);


int main()
{
    int num;

    printf("type a number between 1 and 10: ");
    scanf("%d", &num);

    while(invalidNumber(num))
    {
        printf("type a number between 1 and 10: ");
        scanf("%d", &num);
    }

    roman(num);

    return 0;
}

int invalidNumber(int num)
{
    if(num == 0)
        {
            printf("Due to the way that their numbers worked, the Romans had no need for a symbol to represent zero. Instead, they would simply describe the contents of your brain for not being able to follow simple instructions\n");
            return 1;
        }
        else if(num <0)
        {
            printf("Please follow the instructions\n");
            return 1;
        }
        else if (num >= 11)
        {
            printf("Please follow the instructions\n");
            return 1;
        }
    return 0;
}

void roman(int num)
{
    char romanNum[][5] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    for (int i = 0; i < 5; i++)
    {
        printf("%C", romanNum[num-1][i]);
    }
    
}





