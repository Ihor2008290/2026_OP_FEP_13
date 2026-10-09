#include <stdio.h>

int main () {
    double a, b, c;
    printf("Введіть три сторони трикутника: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Помилка: довжини сторін повинні бути більшими за нуль!\n");
        return 1;
    }
    if (a + b > c && a + c > b && b + c > a ) {
        printf("Трикутник існує\n");
    }
    else {
        printf("Трикутник не існує\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("Трикутник є рівностороннім\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Трикутник є рівнобедреним\n");
    }
    else {
        printf("Трикутник є різностороннім\n");
    }
    
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("Трикутник є прямокутним\n");
    }
    else if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a) {
        printf("Трикутник є гострокутним\n");
    }
    else {
        printf("Трикутник є тупокутним\n");
    }

    return 0;
}
