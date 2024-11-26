#include<stdio.h>
#include<math.h>
int main(void){
    float a,b,c,x1, x2;
    printf("moi ban nhap vao he so cua phuong trinh bac 2 \n");
    printf("nhap lan luot a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    float delta= (b*b) - (4*a*c);
    if(delta>0){
        printf("phuong trinh co 2 nghiem phan biet\n");
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    }
    if(delta==0){
        printf("phuong trinh co nghiem kep\n");
        x1=-b/(2*a);
        x2=x1;
        printf("%f\n", x1);
    }
    if(delta<0){
        printf("phuong trinh vo nghiem\n");
    }
    return 0;
}
