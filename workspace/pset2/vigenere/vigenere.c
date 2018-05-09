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
    string key = (argv[1]);
    for (int k = 0; k < strlen(key); k++)
    {
        if (isalpha(key[k]) == false)
        {
            return 1;
        }
    }
    string plain_text = get_string("plaintext: ");

    int j = 0;
    int key_val;
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isalpha(plain_text[i]))
        {
            if (islower(key[j]))
            {
                key_val = key[j] - 97;
            }
            else
            {
                key_val = key[j] - 65;
            }
            j = (j + 1) % strlen(key);
            if (islower(plain_text[i]))
            {
                plain_text[i] -= 97;
                plain_text[i] = (plain_text[i] + key_val) % 26;
                plain_text[i] += 97;
            }
            else
            {
                plain_text[i] -= 65;
                plain_text[i] = (plain_text[i] + key_val) % 26;
                plain_text[i] += 65;
            }

        }
    }
    printf("ciphertext: %s\n", plain_text);
}