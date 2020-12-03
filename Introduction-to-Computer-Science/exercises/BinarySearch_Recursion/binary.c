#include<stdio.h>
#include<cs50.h>

int binary(int arr[], int x, int start, int end);

int main(void){

    int array[] = {11, 16, 19, 22, 34, 40, 65, 80, 99};

    printf("Original Array: ");
    for(int i = 0; i < 8; i++){
        printf("%i ", array[i]);
    }
    printf("\n");

    int x = get_int("Enter a number to be searched: ");

    int start = 0, end = 8;
    // int mid = (start+end) / 2;

    int index = binary(array, x, start, end);
    if(index == -1)
        printf("Element not Found.\n");
    else
        printf("Element %i found at index %i.\n", x, index+1);

}

int binary(int arr[], int x, int start, int end){

    int mid;

    while(start <= end){
        mid = (start + end) / 2;

        if(arr[mid] == x){
            return mid;
        }
        else if(x > arr[mid]){
            return binary(arr, x, mid+1, end);
        }
        else if(x < arr[mid]){
            return binary(arr, x, start, end-1);
        }

    }

    return -1;
}