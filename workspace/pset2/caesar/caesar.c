#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc > 2 || argc < 2)
    {
        return 1;
    }
    string plain_text = get_string("plaintext: ");
    int k = atoi(argv[1]);
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isalpha(plain_text[i]))
        {
            if (islower(plain_text[i]))
            {
                plain_text[i] -= 97;
                plain_text[i] = (plain_text[i] + k) % 26;
                plain_text[i] += 97;
            }
            else
            {
                plain_text[i] -= 65;
                plain_text[i] = (plain_text[i] + k) % 26;
                plain_text[i] += 65;
            }

        }
    }
    printf("ciphertext: %s\n", plain_text);
}