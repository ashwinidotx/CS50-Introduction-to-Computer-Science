#include<stdio.h>
#include<cs50.h>

/*
This is a Recursive approach to Collatz problem

steps:
1. Take any natural number n.
2. If it's even,
        Half it (n/2),
   Else,
        Triple it and increment by 1 (3n+1)
3. Repeat step 2. until you reach 1
4. Count the number of steps taken to reach and then return it.
*/

int collatz(int n, int steps);

int main(void){

    int num = get_int("Enter a Number: ");
    int x = collatz(num, 0);
    printf("x = %i\n", x);
}


int collatz(int n, int steps){
    if(n == 1){
        return steps;
    }
    steps++;
    if(n % 2 == 0){
        return collatz(n/2, steps);
    }

    return collatz((3 * n) + 1, steps);


}