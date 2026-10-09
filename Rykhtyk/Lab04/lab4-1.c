#include <stdio.h>

int main() {
    int d = 16, c = 9;

    printf("d = %d, c = %d\n", d, c);
    printf("d + c = %d\n", d + c);
    printf("d - c = %d\n", d - c);
    printf("d * c = %d\n", d * c);
    printf("d / c = %d\n", d / c);
    printf("d %% c = %d\n", d % c);
    printf("++c = %d\n", ++d);
    printf("--c = %d\n", --d);

    int x = 3, y = 1;

    printf("x = %d, y = %d\n", x, y);
    printf("x && y = %d\n", x && y); // I
    printf("x || y = %d\n", x || y); // Або
    printf("!x = %d\n", !x); // Не

    unsigned char p = 0b00001101; // 13
    unsigned char q = 0b00000111; // 7

    printf("p = %08b\n", p);
    printf("q = %08b\n", q);
    printf("p & q = %08b\n", p & q); //побітове і
    printf("p | q = %08b\n", p | q); //побітове або
    printf("p ^ q = %08b\n", p ^ q); //exclusive or 
    printf("~p    = %08b\n", (unsigned char)~p); //побітове Не
    printf("p << 2= %08b\n", p << 2); //зсув вліво на 2
    printf("p >> 1= %08b\n", p >> 1); //зсув впрапо на 1

    return 0;
}