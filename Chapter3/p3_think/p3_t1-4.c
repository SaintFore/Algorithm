#include<stdio.h>
#define MAXN 1e20 //用科学计数法这种形式的值得类型是double

int main(){
    // printf("%lf\n",MAXN);
    double x, max = -MAXN, max_2 = -MAXN;
    while(scanf("%lf",&x) == 1){
        if(x >= max) max = x;
        else if(x > max_2 ) max_2 = x;
    }
    printf("The maximum number is: %lf and the second max is: %lf",max, max_2);
    return 0;
}