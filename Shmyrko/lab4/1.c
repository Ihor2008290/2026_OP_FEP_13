#include <stdio.h>
const int MAXBIT=8;
int a,b;
void binprint(int x){
    for(int i=MAXBIT;i>=0;i--){
        int mask=1<<i;
        if(x & mask){printf("1");}
        else{printf("0");}
    }
    printf("\n");
}
int main() {
    a=10;b=7;
    printf("a + b = %d\n",a+b);
    printf("a - b = %d\n",a-b);
    printf("a * b = %d\n",a*b);
    printf("a / b = %d\n",a/b);
    printf("a %% b = %d\n",a%b);
    printf("a = b-- %d\n",a=b--);
    printf("a = b++ %d\n",a=b++);
    printf("a = --b %d\n",a= --b);
    printf("a = ++b %d\n",a= ++b);
    printf("a && b = %d\n",a&&b);
    printf("a || b = %d\n",a||b);
    printf("!a= %d\n",!a);
    a=10;b=7;
    printf("Двійкове а = ");
    binprint(a); 
    printf("Двійкове b = ");
    binprint(b);
    printf("a&b = ");
    binprint(a&b); 
    printf("a|b = ");
    binprint(a|b); 
    printf("a^b = ");
    binprint(a^b); 
    printf("~b =");
    binprint(~b); 
    printf("b<<2 =");
    binprint(b<<2); 
    printf("b>>2 = ");
    binprint(b>>2); 
    

    return 0;
}