#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double a, b, c;
    double D, x1, x2;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (D == 0) {
        x1 = -b / (2 * a);
        printf("x = %.2lf\n", x1);
    }
    else {
        printf("Коренів немає\n");
    }

    return 0;
}