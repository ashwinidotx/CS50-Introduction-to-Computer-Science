#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int array[] = {5, 2, 7, 4, 1, 3, 8, 6};

    printf("Original Array: ");
    for(int i = 0; i < 8; i++){
        printf("%i ", array[i]);
    }
    printf("\n");


    int x = get_int("Enter Element to be searched: ");

    // searching
    for(int i = 0; i < 8; i++){
        if(array[i] == x){
            printf("Element %i found at index %i.\n", x, i+1);
            return 0;
        }
    }
    printf("Element not in the Array.\n");
}