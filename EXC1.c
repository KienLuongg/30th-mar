#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float GetArea(float a, float b, float c);
int main(int argc, char *argv[]) {
    float a,b,c,d;
    printf("nhap a");
    scanf("%f",&a);
    printf("nhap b");
    scanf("%f",&b);
    printf("nhap c");
    scanf("%f",&c);
    if(a+b>c || a+c>b || b+c>a){
    d=GetArea(a,b,c);
    printf("dien tich tam giac la %f",d);
    }else
    printf("khong hop le\n");
    return 0;
}
float GetArea(float a, float b, float c){
    float s,p;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
