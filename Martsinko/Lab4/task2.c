#include <stdio.h>

int main() {
    int a;

    printf("Введіть значення a: ");
    scanf("%d", &a);
    int *ptr = &a;
    printf("Значення а: %d\n", a);
    printf("Адреса а: %p\n", &a);
    printf("Адреса пам'яті за вказівником: %p\n", ptr);
    printf("Значення за вказівником: %d\n", *ptr);
    
    
    return 0;   
}