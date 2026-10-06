#include <stdio.h>
int a,*b;
int main() {
    printf("Введіть число : ");
    scanf("%d",&a);b=&a;
    printf("Значення числа : %d\nАдреса числа у пам'яті : %p",*b,b);

    return 0;
}