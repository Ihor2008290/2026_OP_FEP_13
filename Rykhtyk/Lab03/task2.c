#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char initials[40];
    char email[40];
    char color[20];

    printf("Введіть прізвище: ");
    scanf(" %[^\n]", initials);

    printf("Введіть електронну пошту: ");
    scanf("%s", email);

    printf("Введіть улюблений колір: ");
    scanf("%s", color);

    printf("\n-----------------------------------------------\n");
    printf("№ | Прізвище | Ел. пошта | Улюблений колір\n");
    printf("-----------------------------------------------\n");
    printf("1 | %s | %s | %s\n", initials, email, color);
    printf("-----------------------------------------------\n");

    return 0;

}.\