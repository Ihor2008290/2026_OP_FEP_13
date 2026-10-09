#include <stdio.h>


int main() {
    int a = 10, b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b  = %d\n", a + b);
    printf("a - b  = %d\n", a - b);
    printf("a * b  = %d\n", a * b);
    printf("a / b  = %d\n", a / b);
    printf("a %% b  = %d\n", a % b);
    printf("++b    = %d\n", ++b);
    printf("--b    = %d\n", --b);



    int x = 1, y = 0;
    printf("x = %d, y = %d\n", x, y);
    printf("x && y = %d\n", x && y); // І
    printf("x || y = %d\n", x || y); // АБО
    printf("!x     = %d\n", !x); // НЕ

    unsigned char p = 0b00001100; // 12
    unsigned char q = 0b00000101; // 5

    printf("p      = %08b\n", p);
    printf("q      = %08b\n", q);

    printf("p & q  = %08b\n", p & q);  // і
    printf("p | q  = %08b\n", p | q);  // або
    printf("p ^ q  = %08b\n", p ^ q);  // виключне або
    printf("~p     = %08b\n", (unsigned char)~p); // заперечення
    printf("p << 2 = %08b\n", p << 2); // зсув вліво
    printf("p >> 1 = %08b\n", p >> 1); // зсув вправо

    return 0;
}