#include<stdio.h>
#include<math.h>
int main(void){
    int month, money;
    double rate, receive, interest;
    printf("moi ban nhap vao so tien gui ngan hang ban dau ");
    scanf("%d", &money);
    receive=money;
    printf("moi ban nhap lai xuat hang thang  ");
    scanf("%lf", &rate);
    printf("moi ban nhap vao so thang gui ");
    scanf("%d", &month);
    for(int i=1; i<=month; i++) {
        receive+=receive*rate;
    }
    interest=receive-money;
    printf("tien lai %lf\n", interest);
    printf("tien nhan duoc %lf\n", receive);
    return 0;
}
