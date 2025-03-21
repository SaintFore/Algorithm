#include<stdio.h>

int main(){
    int a=1;
    int b=0;
    int x=10,y=100;
    if(a) if(b) x++;else y++; //这个else与最靠近的相匹配，但还是报错，因为这种写法阅读非常困难
    printf("%d %d\n",x,y);
    //使用括号表达更清晰
    return 0;
}