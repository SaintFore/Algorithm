#include<stdio.h>
#include<string.h>
#define maxn 200
int a[maxn][maxn];
 
int main(){
    int n,x,y,tot=0;
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    tot = a[x=0][y=n-1] = 1; //就是tot=1和a[x=0][y=n-1]=1这两句话合并了
    //也是这里x和y进行了初始化，并且注意此时a[0][n-1]已经赋了1，也就是第一个数，右上角
    while(tot < n*n){
        while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot; //向下走
        while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot; //向左走
        while(x-1>=0 && !a[x-1][y]) a[--x][y]= ++tot; //向上走
        while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot; //向右走
    }
    for(x =0;x<n;x++){
        for(y=0;y<n;y++) printf("%3d",a[x][y]);
        printf("\n");
    }
    return 0;
}