#include<stdio.h>
int main(){
    //这个就纯粹用数学方法了
    int a,b;
    scanf("%d%d",&a,&b);
    a = a+b; 
    b = a-b; //b = (a + b) - b = a
    a = a-b; //a = (a + b) - a = b
    printf("%d %d",a,b);
    return 0;
}