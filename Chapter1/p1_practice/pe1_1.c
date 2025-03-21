#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.3f\n",(a+b+c)/3.0); //因为输出的是浮点数，所以参与运算的至少有一个浮点数
    return 0;
}