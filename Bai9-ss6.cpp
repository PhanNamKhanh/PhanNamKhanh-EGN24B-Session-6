#include<stdio.h>
int main(void){
    int number, a, b, c;
    for(int i=999; i>=100; i--){
        number=i;
        a=number%10;
        b=number/10%10;
        c=number/100;
        if(number == a*a*a + b*b*b + c*c*c){
            printf("%d\n", number);
        }
    }
    return 0;
}
