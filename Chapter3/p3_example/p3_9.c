#include<stdio.h>
#include<string.h>
#define maxn 100005
int ans[maxn];

int main(){
    int T, n;
    memset(ans, 0, sizeof(ans));
    for(int m = 1; m < maxn; m++){
        int x = m, y = m;
        while(x > 0){
            y += x % 10;
            x /= 10; //这里x%10再除10，可以获得x的每一位数字
        }
        if(ans[y] == 0 || m < ans[y]) ans[y] = m;
    }
    scanf("%d",&T); //输入T组数据
    while(T--){
        scanf("%d",&n); //输入n
        printf("%d\n",ans[n]);
    }
    return 0;
}