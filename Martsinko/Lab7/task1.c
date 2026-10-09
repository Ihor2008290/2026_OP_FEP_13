#include <stdio.h>
#include <stdbool.h>

bool is_prime_number(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
    
int main(){
    int num;
    printf("Введіть число: ");
    scanf("%d", &num);
    if(is_prime_number(num) == true){
        printf("Число є простим");
    }
    else
    {
        printf("Число не є простим");
    }
    return 0;
}

