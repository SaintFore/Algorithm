#include<stdio.h>
#include<time.h>


int main(){
    const int MOD = (int)1e6;
    int sum=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int factorial = 1;
        for(int j =1;j<=i;j++){
            factorial=factorial *j %MOD;
        }
        sum += factorial%MOD; //这个需要看一下取余的公式
    }
    
    printf("%d\n",sum % MOD);
    //1e6是科学计数法，e后面是指数位，不过这个是一个double类型，我将其强转为int类型
    printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC); //用于计算时间，clock()函数会统计代码开始运行的时间
    //win可以使用管道把数值送进去，也就是echo 值 | 程序名
    //多个值，多个程序就是 echo v1 v2 | p1 | p2
    return 0;

}
