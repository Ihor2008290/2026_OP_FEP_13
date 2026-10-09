#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
   
    int number = 35;
    double rnum = 873.265;
    char let = 'S';
    char string[] = "Hello Lab3";

    printf("Десяткове число: %d\n", number);
    printf("Двійкове число:  %b\n", number); 
    printf("Вісімкове число: %o\n", number);
    printf("Шістнадцяткове число: %x\n", number);

    printf("Плаваючий формат: %f\n", rnum);
    printf("Експоненційний формат: %e\n", rnum);
    printf("Гнучкий формат: %g\n", rnum);

    printf("Символ: %c\n", let);   
    printf("Стрічка: %s\n", string);

    int num = 35;
    int *p = &num;
    printf("Вказівник: %p\n", p);

    return 0;

}