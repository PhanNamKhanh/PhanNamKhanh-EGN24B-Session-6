#include<stdio.h>
int main(void){
    int number1, number2, number3, number4, number5;
    int a=0, b=0;
    printf("moi ban nhap vao 5 so nguyen:\n");
    scanf("%d %d %d %d %d", &number1, &number2, &number3, &number4, &number5);
    if(number1%2==0){
        a++;
    }else{
        b++;
    }
    if(number2%2==0){
        a++;
    }else{
        b++;
    }
    if(number3%2==0){
        a++;
    }else{
        b++;
    }
    if(number4%2==0){
        a++;
    }else{
        b++;
    }
    if(number5%2==0){
        a++;
    }else{
        b++;
    }
    printf("so so chan trong 5 so tren la: %d\n", a);
    printf("so so le trong 5 so tren la: %d\n", b);
    return 0;
}
