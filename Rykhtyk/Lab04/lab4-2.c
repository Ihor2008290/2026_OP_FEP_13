#include <stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int *pointer = &number;

    printf("Number value : %d\n", number);
    printf("Number address: %p\n", (void *)&number);
    printf("Address through pointer: %p\n", (void *)pointer);
    printf("Value through pointer: %d\n", *pointer);

    return 0;
}