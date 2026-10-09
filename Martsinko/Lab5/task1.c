#include <stdio.h>

int main () {
    int a, b;
    printf("Введіть a і b: ");
    scanf("%d %d", &a, &b); 
    a > b ? printf("%d > %d", a, b) : printf("%d < %d", a, b);
    return 0;
}