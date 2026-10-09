#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    
    printf("Введіть ціле число: ");
    scanf("%d", &num);
    
    int *ptr = &num;
    
    printf("Значення змінної num: %d\n", num);
    printf("Адреса змінної в пам'яті (&num): %p\n", &num);
    printf("Адреса, яку зберігає вказівник (ptr): %p\n", ptr);
    printf("Значення за адресою через вказівник (*ptr): %d\n", *ptr);
    
    return 0;
}