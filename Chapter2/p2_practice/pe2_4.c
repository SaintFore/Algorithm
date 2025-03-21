#include<stdio.h>

int main(){
    int n,m;
    int kase =1;
    while(scanf("%d%d",&n,&m) == 2 && m != 0 && n !=0){
        double sum = 0;
        for(int i =n;i<=m;i++){
            sum += (1.0/i) * (1.0/i);
        }
        printf("Case %d: %.5f\n",kase++,sum);
    }
    return 0;
}