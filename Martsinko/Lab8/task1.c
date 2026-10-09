#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void fill_random_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main(){
    int array[10];
    srand(time(NULL));
    fill_random_array(array, 10);
    printf("Згенерований масив:\n[ ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("]");


    return 0;
}