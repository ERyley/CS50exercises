//using an multi dimensional array to convert 1-3999 into roman numerals

#include <stdio.h>


void roman(int num);
int invalidNumber(int num);
int *getPos(int num);

int main()
{
    int num;

    printf("type a number between 1 and 3999: ");
    scanf("%d", &num);

    while(invalidNumber(num))
    {
        printf("type a number between 1 and 3999: ");
        scanf("%d", &num);
    }

    roman(num);

    return 0;
}

//function to determine if input is outside of parameters
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
        else if (num >= 4000)
        {
            printf("Please follow the instructions\n");
            return 1;
        }
    return 0;
}

// seperating the number into thousands, hundreds, tens, and units in an array
int *getPos(int num)
{
    static int numPos[4];
    numPos[0] = num/1000;
    numPos[1] = (num%1000)/100;
    numPos[2] = (num%100)/10;
    numPos[3] = num%10;

    return numPos;
}

// calling getPos to convert each position into its roman numeral equivalent and print them on screen
void roman(int num)
{
    int *posArray = getPos(num);

    char thousands[][4] = {"", "M", "MM", "MMM"};
    for (int i = 0; i < 4; i++)
    {
        printf("%C", thousands[*(posArray)][i]);
    }
    char hundreds[][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    for (int i = 0; i < 5; i++)
    {
        printf("%C", hundreds[*(posArray +1)][i]);
    }
    char tens[][5] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    for (int i = 0; i < 5; i++)
    {
        printf("%C", tens[*(posArray +2)][i]);
    }
    char units[][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    for (int i = 0; i < 5; i++)
    {
        printf("%C", units[*(posArray +3)][i]);
    }
}
