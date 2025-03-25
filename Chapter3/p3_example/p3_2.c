#include<stdio.h>
#include<string.h>
#define maxn 1010 //数组的生命稍显大一些，因为常常难以计算出需要的数组大小
//开灯问题
int a[maxn];
int main(){
    //输入与初始化
    int n,k, first =1;
    memset(a, 0, sizeof(a));
    scanf("%d%d",&n,&k);
    //模拟k轮操作，也就是k个人的操作。
    for(int i = 1;i <=k;i++){
        for(int j=1;j<=n;j++){
            if(j%i == 0)
                a[j] = !a[j];
        }
    }
    //输出
    for(int i=1;i<=n;i++)
        if(a[i]){
            if(first) first =0;
            else printf(" ");
            printf("%d",i);
        }
    printf("\n");
    return 0;
}