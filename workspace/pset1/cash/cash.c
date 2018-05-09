#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int coins = 0;
    //get valid amount of owed
    do
    {
        owed = get_float("Change owed: ");
    }
    while (owed < 0);

    //calculate owed amount in cents
    owed = owed * 100;
    owed = round(owed);

    while (owed > 24)
    {
        owed = owed - 25;
        coins++;
    }


    while (owed > 9)
    {
        owed = owed - 10;
        coins++;
    }


    while (owed > 4)
    {
        owed = owed - 5;
        coins++;
    }


    while (owed > 0)
    {
        owed = owed - 1;
        coins++;
    }


    printf("%i\n", coins);

}