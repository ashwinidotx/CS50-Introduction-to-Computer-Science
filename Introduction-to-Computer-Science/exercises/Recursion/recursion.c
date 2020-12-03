#include<stdio.h>
#include<cs50.h>

void drawP(int n);

int main(void)
{
    int number = get_int("Height");

    drawP(number);
}

void drawP(int n)
{
    if(n == 0)
        return;

    drawP(n-1);

    for(int i = 0; i < n; i++)
    {
        printf("# ");
    }
    printf("\n");

    // drawP(n-1);
}