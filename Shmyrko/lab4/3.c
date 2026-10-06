#include <stdio.h>
#include <math.h>
double D,x1,x2,a,b,c;
int main() {
    printf("Введіть число коефіцінти квадратного рівняння: \n");
    printf("a = ");scanf("%lf",&a);
    printf("\nb = ");scanf("%lf",&b);
    printf("\nc = ");scanf("%lf",&c);
    D=b*b-4*a*c;
    //printf("%f",D);
    if(D>0.0){
        x1=(-b+sqrt(D)/(2*a));
        x1=(-b - sqrt(D)/(2*a));
        printf("Є два цілі корені : x1=%.3lf , x2 =%.3lf",x1,x2);
    }else{
        if(D==0.0){
            x1= -b /(2*a);printf("Є один дійсний корінь: x = %.3lf", x1);
        }
        else {printf("Дійсних коренів немає(");}
    }
    return 0;
}