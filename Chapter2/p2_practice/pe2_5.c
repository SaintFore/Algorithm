#include<stdio.h>

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3 && a !=0 && b!=0 && c!=0){
        // 使用%.*f格式，让第一个*由参数c指定小数位数
        printf("%.*f\n",c,(double)a/b);
    }
    return 0;
}