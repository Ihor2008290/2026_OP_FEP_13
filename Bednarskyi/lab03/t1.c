#include <stdio.h>

int main() {

    int num = 122;
    printf("Десяткове: %d\n", num);
    printf("Двійкове: %b\n", num);
    printf("Вісімкове: %o\n", num);
    printf("Шістнадцяткове: %x\n", num);

    double val = 123.456;
    printf("Плаваюче: %f\n", val);
    printf("Експоненційне: %e\n", val);
    printf("Гнучке: %g\n", val);

    char c = 'S';
    printf("Символ: %c\n", c);

    char str[] = "string";
    printf("Стрічка: %s\n", str);

    int *p = &num;
    printf("Вказівник: %p\n", p);

    return 0;
}