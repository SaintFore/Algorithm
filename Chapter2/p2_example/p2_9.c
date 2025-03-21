#include<stdio.h>

int main(){
    int x, n=0, min, max, s=0; //这里min，max都没给初值，所以啥值都可能会是
    //这个程序是有问题的
    // printf("%d\n",scanf("%d",&x));
    while (scanf("%d",&x) == 1) //scanf有返回值，成功则返回1，失败则可能返回挺多种情况的，所以就加上判断吧
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n);
    return 0;
    
}