#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    //get valid integer for height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    for (int i = 0; i < height; i++)
    {
        //print spaces
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }

        //print left hashes
        for (int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }

        //print gap
        printf("  ");

        //print right hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        //print new line
        printf("\n");
    }

}