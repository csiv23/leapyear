#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int year;
    year = get_int("Insert your year here: ");



    if((year % 4 == 0 && year % 100 > 0) || year % 400 == 0)
    {
        printf("It's a leap year\n");
        return 1;
    }
    else
    {
        printf("It isn't a leap year\n");
    }

}