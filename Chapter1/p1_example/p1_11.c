#include<stdio.h>

int main(){
    int n,m,c,r;
    scanf("%d%d",&n,&m);
    c = (m - 2*n)/2;
    r = 2*n-m/2;//这里其实直接写 n - c即可
    if(m % 2 == 1 || c < 0 || r < 0)
        printf("No answer\n");
    else
        printf("%d %d\n",c,r);
    return 0;
}