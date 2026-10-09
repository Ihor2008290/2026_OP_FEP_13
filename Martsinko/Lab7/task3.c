#include <stdio.h>
#include <math.h>

double f(double x, double N, double A) {
    return N * x + A;
}

int main(void) {
    double N, A;

    printf("Введіть порядковий номер у журналі (N): ");
    scanf("%lf", &N);
    printf("Введіть ваш вік (A): ");
    scanf("%lf", &A);

    double a = -100.0; 
    double b = 100.0;  
    double eps = 0.00001; 

    if (f(a, N, A) * f(b, N, A) > 0) {
        printf("На відрізку [%.0f, %.0f] кореня немає.\n", a, b);
        return 1;
    }

    double mid;

    while ((b - a) / 2.0 > eps) {
        mid = (a + b) / 2.0;

        if (f(mid, N, A) == 0.0) {
            break;
        }

        if (f(a, N, A) * f(mid, N, A) < 0) {
            b = mid;  
        } else {
            a = mid;  
        }

    }

    double x_approx = (a + b) / 2.0;

    printf("\nРезультат методу бісекції:\n");
    printf("Знайдений корінь x: %.5lf\n", x_approx);

    return 0;
}