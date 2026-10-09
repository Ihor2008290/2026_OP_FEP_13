#include <stdio.h>

int main() {
    int num = 42;
    printf("Десяткове: %d\n", num);
    printf("Двійкове: %b\n", num);
    printf("Шістнадцяткове: %x\n", num);
    double value = 123.456;
    printf("Плаваюче: %f\n", value);
    printf("Експоненційне: %e\n", value);
    printf("Гнучка: %g\n", value);
    char c = 'A';
    printf("Символ: %c\n", c);
    char str[] = "Hello";
    printf("Стрічка: %s\n", str);
    int n = 42;
    int *p = &n;
    printf("Вказівник: %p\n", p);
    return 0;
}