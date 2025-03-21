#include<stdio.h>

int main(){
    int a;
    char b;
    // scanf("%d%c",&a,&b);  //这个就不行了，结果为12没有s了，因为直接接收到空格了
    scanf("%d %c",&a,&b); //这个是可以的，结果为12 s
    printf("%d %c\n",a,b);
    return 0;
}