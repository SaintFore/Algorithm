#include<stdio.h>
#define MAXN 1010
int main(){
    double x, sum = 0;
    int count =0;
    double a[MAXN];
    while(scanf("%lf",&x) == 1){
        a[count++] = x;
        sum += x;
    }
    int average = sum /count;
    for(int i=0;i<count;i++){
        if(a[i] <= average) printf("%lf ",a[i]);
    }
    printf("\n");
    return 0;
    //因为涉及到了平均值，所以必须使用数组
}