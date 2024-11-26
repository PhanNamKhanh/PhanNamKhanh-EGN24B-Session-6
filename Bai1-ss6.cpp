#include<stdio.h>
int main(void){
    int number1, number2, number3, number4, number5;
    int sum =0;
    printf("moi ban nhap vao 5 so nguyen\n");
    scanf("%d %d %d %d %d", &number1, &number2, &number3, &number4, &number5);
    if(number1%2!=0){
        sum+=number1;
    }
    if(number2%2!=0){
        sum+=number2;
    }
    if(number3%2!=0){
        sum+=number3;
    }
    if(number4%2!=0){
        sum+=number4;
    }
    if(number5%2!=0){
        sum+=number5;
    }
    printf("tong cac so le trong 5 so la: %d\n", sum);
    return 0;
}
