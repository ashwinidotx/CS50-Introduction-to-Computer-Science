#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
       printf("Usage ./ceasar key\n");
       return 1;
    }

    string keyStr = argv[1];    // first cmd argument containing the key.
    int key = 0;                // initialize key to 0.
    int len = strlen(keyStr);   // get the length of your entered key.

    // printf("First Arg: %s\n", keyStr); // debug

    // in a for loop, check if the current element is a digit, add it to the key else exit the program with usage key as o/p.
    for (int i = 0; i < len; i++)
    {
        if (!isdigit(keyStr[i]))
        {
            printf("Usage ./ceasar key\n");
            return 1;
        }
    } // end for.

    key = atoi(keyStr);
    // NOTE: atoi() convert string to integer not character.

    // printf("Key: %i\n", key); // debug

    // check the range of key : 1-26. (not required for the question.)
    // if (key == 0 || key >= 26)
    // {
    //     printf("Usage ./ceasar key\n");
    //     return 1;
    // }
    //DO THE REST.

    string pt = get_string("plaintext: ");
    // convert pt to ct.
    int plen = strlen(pt);
    string ct = pt;
    printf("ciphertext before : %s\n", ct);
    for (int i = 0; i < plen; i++)
    {
        if (isalpha(pt[i]))
        {
            if (isupper(pt[i]))
            {
                ct[i] = (pt[i] - 'A' + key) % 26 + 'A';
            }
            else
            {
                ct[i] = (pt[i] - 'a' + key) % 26 + 'a';
            }
        }
        else
        {
            ct[i] = pt[i];
        }
    } // end for

    printf("ciphertext: %s\n", ct);

} // end main.