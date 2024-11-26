#include<stdio.h>
int main(void){
    const int key= 1234;
    int number;
    do{
        printf("moi ban nhap mat khau co 4 chu so:");
        scanf("%d", &number);
        if(number==key){
            printf("ban nhap dung mat khau roi\n");
        }else{
            printf("ban nhap sai mat khau roi\n");
        }
    }while(number!=key);
    return 0;
}
