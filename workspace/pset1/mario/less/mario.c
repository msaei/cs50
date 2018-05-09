#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int height;

    //get an valid integer for height
    do
    {
        height = get_int("Height:");
    }
    while (height < 0 || height > 23);

    for (int i = 0; i < height; i++)
    {
        //print spaces
        for (int k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }

        //print hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        //print an extra hash and then new line
        printf("#\n");
    }

}