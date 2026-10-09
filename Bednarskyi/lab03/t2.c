#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
   char name[50];
    char email[50];
    char color[50];

    printf("Введення даних\n");
    printf("Прізвище та ініціали: ");
    scanf("%[^\n]", name); 
    
    printf("Ел.пошта: ");
    scanf(" %[^\n]", email);
    
    printf("Улюблений колір: ");
    scanf(" %[^\n]", color);

    printf("------------------------------------------------------------------------\n");
    printf("| %-5s | %-20s | %-20s | %-15s |\n", "№ п/п", "Прізвище та ініціали", "Ел.пошта", "Улюблений колір");
    printf("------------------------------------------------------------------------\n");
    printf("| %-5d | %-20s | %-20s | %-15s |\n", 1, name, email, color);
    printf("------------------------------------------------------------------------\n");

    return 0;
}