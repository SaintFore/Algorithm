#include<stdio.h>

int main(){
    int x, n=0, min, max, s=0;
    printf("%d\n",scanf("%d",&x));
    while (scanf("%d",&x) == 1) //scanf有返回值，成功则返回1，失败则返回0
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    return 0;
    
}