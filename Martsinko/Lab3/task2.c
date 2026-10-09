#include <stdio.h>

int main()
{
    char name[50];
    char email[50];
    char color[30];

    printf("Прізвище та ініціали: ");
    scanf(" %49[^\n]", name);

    printf("Email: ");
    scanf("%49s", email);

    printf("Улюблений колір: ");
    scanf("%29s", color);

    printf("%-1s %-20s %-32s %-15s\n",
           "№", "Прізвище, Ініціали", "Ел. пошта", "Колір");
    printf("-----------------------------------------------------------------------\n");
    printf("%-1d %-28s %-25s %-15s\n",
           1, name, email, color);
    return 0;
}