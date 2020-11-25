#include<stdio.h>
#include<cs50.h>

int main(void){

    int array[] = {11, 16, 19, 22, 34, 40, 65, 80, 99};

    printf("Original Array: ");
    for(int i = 0; i < 8; i++){
        printf("%i ", array[i]);
    }
    printf("\n");

    int x = get_int("Enter a number to be searched: ");

    int start = 0, end = 8;
    int mid;

    while(start <= end){
        mid = (start + end) / 2;

        if(array[mid] == x){
            printf("Element %i found at index %i.\n", x, mid+1);
            return 0;
        }
        else if(x > array[mid]){
            start = mid + 1;
        }
        else if(x < array[mid]){
            end = mid - 1;
        }

    }

    if(start > end)
        printf("Element not Found.\n");

}