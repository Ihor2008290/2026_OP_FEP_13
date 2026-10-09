#include <stdio.h>

int main() {
    int i = 1;
    int result = 0;
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);

    while (i <= 100) {
        if (i == 33 || i == num) {
            i++;
            continue;
        }
        result += i;
        i++;
    }
    printf("%d", result);
}