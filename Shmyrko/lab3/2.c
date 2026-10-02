#include <stdio.h>
int n;
char name[15][15],mails[15][25],fav_col[15][15];
int main() {
    printf("Скільки студентів хочете ввести : ");
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        printf("\nВведіть данні студента №%i : ",i);
        scanf("%14s %24s %14s",name[i],mails[i],fav_col[i]);
    }
    printf("\n--------------------------------------------------------------\n");
    printf("| %-6s%d %-20s %-20s %-14s \n","№",0,"Ім'я","Ел.Пошта","Колір");
    //printf("\n--------------------------------------------------------------\n");
    for(int i=1;i<=n;i++){
        printf("| %-5s%d %-20s %-15s %-4s \n","№",i,name[i],mails[i],fav_col[i]);
        //printf("\n%s\n%s\n%s",name[i],mails[i],fav_col[i]);
    }
    return 0;
}