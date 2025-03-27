#include<stdio.h>
#define MAXN 1010

double square(double number){
    return number * number;
}

int main(){
    double x, sum = 0, Dsum = 0, a[MAXN];
    int count =0;
    while(scanf("%lf",&x) == 1){
        a[count++] = x;
        sum +=x;
    }
    double average = sum /count;
    
    for(int i=0;i<count;i++){
        double differ = square(a[i] - average);
        Dsum += differ;
    }
    printf("%lf\n",Dsum / count);
    //方差可以通过数学等式，不用数组，一遍即可计算出来。

}