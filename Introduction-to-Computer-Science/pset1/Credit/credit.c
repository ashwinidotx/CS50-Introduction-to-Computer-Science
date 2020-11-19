#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // credit cards
    //AmEx 15 digits; starts with 34/37
    //Master Card 16 digits; starts with 51/52/53/54/55
    //Visa 13/16 digits; starts with 4

    long number = get_long("Number: ");

    long temp = number;
    int fSum = 0, sSum = 0, count = 1;

    while (temp != 0)
    {
        int t = 0;
        if (count % 2 == 0)
        {
            t = temp % 10 * 2;
            while (t != 0)
            {
                fSum = fSum + t % 10;
                t = t / 10;
            }
        }
        count++;
        temp = temp / 10;
    }

    temp = number;
    count = 1;

    while (temp != 0)
    {
        if (count % 2 != 0)
        {
            // printf("temp value: %ld\n", temp%10);
            sSum = sSum + temp % 10;
        }
        count++;
        temp = temp / 10;
    }
    printf("fSUM: %i sSUM: %d\n", fSum, sSum);

    fSum = fSum + sSum;

    printf("Final Number: %i\n", fSum);


    temp = number;
    count = 2;

    while (temp > 100)
    {
        temp = temp / 10;
        count++;
    }

    printf("temp: %ld\n", temp);
    if (fSum % 10 == 0)
    {
        if ((temp == 34 || temp == 37) && count == 15)
        {
            printf("AMEX\n");
        }
        else if ((temp == 51 || temp == 52 || temp == 53 || temp == 54 || temp == 55) && count == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (count == 13 || count == 16)
        {
            int t = temp;
            t = (temp / 10) % 10;
            if (t == 4)
            {
                printf("VISA\n");
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
    else
    {
        printf("INVALID\n");
    }



}