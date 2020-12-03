#include<stdio.h>
#include<cs50.h>

void insertionSort(int arr[], int n);

int main(void){

    int array[] = {5, 2, 7, 4, 1, 3, 8, 6};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", array[i]);
    }
    printf("\n");

    insertionSort(array, n);
}

void insertionSort(int array[], int n){
    //

    int j, element;
    // j for loop #2
    // element to store the current element (array[i] inside 2nd loop)

    for(int i = 1; i < n; i++){
        element = array[i];
        j = i;
        // while loop to check if the element is less than the array[j-1], if so then, shift the array.
        // this loop goes from right to left.
        while(j > 0 && element < array[j-1]){
            array[j] = array[j-1];
            j--;
        }
        array[j] = element;
        // after looping and shifting all the elements by 1, add the element to its correct place.
    }

    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", array[i]);
    }
    printf("\n");
}