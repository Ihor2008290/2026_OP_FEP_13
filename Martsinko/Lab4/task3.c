#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double d, x1, x2;
    printf("Введіть a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d == 0) {
        x1 = -b / (2 * a);
        printf("%lf\n", x1);
    }
    else if (d > 0) {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        printf("%lf %lf\n", x1, x2);
    }
    else {
        printf("Рівняння не має дійсних коренів\n");
    }
    return 0;
}