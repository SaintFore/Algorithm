#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m;
    m = (n%10)*100+(n/10%10)*10+(n/100);
    printf("%d\n",m); //直接输出倒转的数字
    printf("%03d\n",m);  //三位，不够的补0
    // printf("%13d\n",m);  //这可不是补1了，而是保持13位，不够的用空格补充
    // printf("%013d\n",m);  //十三位，不够的用0补充
    // printf("%3d\n",m);  //三位，不够的用空格补充
    return 0;
}