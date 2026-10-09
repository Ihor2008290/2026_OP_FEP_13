#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);    
    int a = 17, b = 5;
    printf("Арифметичні оператори \n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b); 
    printf("a %% b = %d\n", a % b); 
    printf("++a = %d\n", ++a);    
    printf("--b = %d\n\n", --b);  
    
    a = 17; b = 5;

    printf("Логічні оператори та порівняння\n");
    printf("a > b: %d\n", a > b);                               // Більше
    printf("a == b: %d\n", a == b);                             // Дорівнює
    printf("(a > 10) && (b < 10): %d\n", (a > 10) && (b < 10)); // Логічне І
    printf("(a < 5) || (b == 5): %d\n", (a < 5) || (b == 5));   // Логічне АБО
    printf("!(a == b): %d\n\n", !(a == b));                     // Логічне НЕ

    printf("Побітові оператори\n");
   
    unsigned char d = 15; // 00001111
    unsigned char q = 2;  // 00000010

    printf("d = %08b\n", d);
    printf("q = %08b\n", q);
    printf("d & q = %08b\n", d & q);          // Побітове І
    printf("d | q = %08b\n", d | q);          // Побітове АБО
    printf("d ^ q = %08b\n", d ^ q);          // Побітове XOR
    printf("~d = %08b\n", (unsigned char)~d); // Побітове НЕ
    printf("d << 2 = %08b\n", d << 2);        // Зсув вліво на 2
    printf("d >> 1 = %08b\n", d >> 1);        // Зсув вправо на 1

    return 0;
}