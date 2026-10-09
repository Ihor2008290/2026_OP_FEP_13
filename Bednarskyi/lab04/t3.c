#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b, c;
    double D, x1, x2;

    printf("Введіть коефіцієнти a, b, c (цілі числа): ");
    scanf("%d %d %d", &a, &b, &c);


    D = (double)(b * b - 4 * a * c);
    printf("Дискримінант D = %.2lf\n", D);

    if (D > 0) {
    
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("Рівняння має 2 корені:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    } 
    else if (D == 0) {
        x1 = (double)(-b) / (2.0 * a);
        printf("Рівняння має 1 корінь:\n");
        printf("x = %.2lf\n", x1);
    } 
    else {
        printf("Дійсних коренів немає (D < 0)\n");
    }

    return 0;
}