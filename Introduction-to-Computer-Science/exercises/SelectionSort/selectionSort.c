#include<stdio.h>
#include<cs50.h>

void selectionSort(int arr[], int n);

int main(void){
    int array[] = {5, 2, 7, 4, 1, 3, 8, 6};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", array[i]);
    }
    printf("\n");
    selectionSort(array, n);
}

void selectionSort(int arr[], int n){

    int temp; // temp variable to swap the value at current index and the smaller number found at a different index.

    for(int i = 0; i < n; i++){

        for(int j = i; j < n; j++){
            // keeping arr[i] as the smallest number, we compare it with the rest of the array,
            // if we find a smaller number, we swap them.
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // print the sorted array.
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");

}