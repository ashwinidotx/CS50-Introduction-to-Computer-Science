#include<stdio.h>
#include<cs50.h>

void bubbleSort(int arr[], int n);

int main(void){
    int array[] = {5, 2, 7, 4, 1, 3, 8, 6};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", array[i]);
    }
    printf("\n");

    bubbleSort(array, n);

}

void bubbleSort(int arr[], int n){
    //do
    int swap = -1;
    int temp;
    while(swap != 0)
    {
        swap = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                swap++;
            }
        }
    }

    printf("Sorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
}