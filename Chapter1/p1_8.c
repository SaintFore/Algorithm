#include<stdio.h>

int main(){
    //没啥说的，用中间变量作为桥
    int a,b,t;
    scanf("%d%d",&a,&b);
    t = a; 
    a = b;
    b = t;
    printf("%d %d",a,b);
    return 0;
}