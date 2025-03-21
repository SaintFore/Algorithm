#define LOCAL //如果没有这个，后面的ifdef就不会运行了。这是条件编译
//同时我们要知道，最好别删除一些测试的代码，注释掉即可，或许未来还有用。
#include<stdio.h>
#define INF 1000000000

int main(){
#ifdef LOCAL
    freopen("data.in","r",stdin); //把这个数据部分放在与该程序的exe同一文件下
    freopen("data.out","w",stdout);
#endif
    int x, n=0, min = INF, max = -INF, s=0; //要求出最小值，最小值一定要赋成最大值，最大值一定要赋成最小值
    while (scanf("%d", &x) == 1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n",min,max,(double)s/n); //这里使用了freopen out了，所以不会输出到终端了，而是直接输出到文件data.out中了
    return 0;
}