#include <stdio.h>
int num,c,*d;
double num2;
char a,b[]="Hello World!";
int main() {
    num=77;
    printf("Ціле число у десятковому форматі : %d\n",num);
    printf("Ціле число у шістнадцятковому форматі : %x\n",num);
    printf("Ціле число у вісімкововму форматі : %o\n\n",num);
    num2=77.7777;
    printf("Дійсне число у формі з плаваючою комою : %f\n",num2);
    printf("Дійсне число у експоненційній формі : %e\n",num2);
    printf("Дійсне число у гнучкій формі : %g\n\n",num2);
    a='A';
    printf("Символ : %c\n",a);
    printf("Стрічка : %s\n\n",b);
    d=&num;
    printf("Вказівник : %p\n",d);


    return 0;
}