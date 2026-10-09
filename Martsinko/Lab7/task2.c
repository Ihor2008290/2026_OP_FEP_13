#include<stdio.h>

int recursion(int num){
    if (num >= 100){
        return 100;}
    return num + recursion(num + 1);
}

int main(){
    int num;
    printf("Введіть ваш порядковий номер: ");
    scanf("%d", &num);    
    printf("%d", recursion(num));
    
}
