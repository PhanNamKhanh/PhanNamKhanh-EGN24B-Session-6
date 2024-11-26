#include<stdio.h>
int main(void){
    int number;
    printf("moi ban nhap vao so nguyen bat ky ");
    scanf("%d", &number);
    for(int i=1; i<=number; i++){
        if(number%i==0){
            printf("%d\n", i);
        }
    }
    return 0;
}
