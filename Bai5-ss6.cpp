#include<stdio.h>
int main(void){
    int day, month, year;
    printf("moi ban nhap vao so thang ");
    scanf("%d", &month);
    printf("moi ban nhap vao so nam ");
    scanf("%d", &year);
    switch(month){
            case 2:
                if( year%400==0 || (year%4==0 && year%100!=0)){
                    printf("thang %d nam %d co 29 ngay\n", month, year);
                }else{
                    printf("thang %d nam %d co 28 ngay\n", month, year);
                }
                break;
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("thang %d nam %d co 31 ngay\n", month, year);
                break;
            case 4: case 6: case 9: case 11:
                printf("thang %d nam %d co 30 ngay\n", month, year);
                break;
        }
    return 0;
}
