#include<stdio.h>
#define maxn 105

// int a[maxn]; // 较大的数组在main函数外，否则程序可能无法运行
int main(){
    int a[maxn]; //C语言中的数组不是一等公民，而是受歧视的
    int x,n=0;
    while(scanf("%d",&x) == 1)
        a[n++] = x;
    for(int  i = n-1;i>=1;i--){ //倒序输出
        printf("%d ",a[i]);
    }
    printf("%d\n",a[0]);
}