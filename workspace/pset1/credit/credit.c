#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card_number;
    //get a valid card number
    do
    {
        card_number = get_long_long("Number: ");
    }
    while (card_number < 0);

    int check_sum = 0;
    int digits = 0;
    int last_digit = 0;
    int second_last_digit;
    int factor = 1;
    while (card_number > 0)
    {
        digits++;
        second_last_digit = last_digit;
        last_digit = (card_number % 10);
        if (last_digit * factor > 9)
        {
            check_sum = check_sum + (last_digit * factor) % 10 + 1 ;
        }
        else
        {
            check_sum = check_sum + last_digit * factor ;
        }

        if (factor == 1)
        {
            factor = 2;
        }
        else
        {
            factor = 1;
        }
        //printf("last digit: %i, check_sum = %i\n", last_digit, check_sum);
        card_number = (card_number - last_digit) / 10;
    }

    check_sum = check_sum % 10;
    if (check_sum == 0)
    {

        if (last_digit == 4 && (digits == 13 || digits == 16))
        {
            printf("VISA\n");
        }
        else if (last_digit == 3 && (second_last_digit == 4 || second_last_digit == 7) && digits == 15)
        {
            printf("AMEX\n");
        }
        else if (digits == 16 && last_digit == 5 &&
            (second_last_digit == 1 || second_last_digit == 2 || second_last_digit == 3 || second_last_digit == 4 || second_last_digit == 5))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }


}