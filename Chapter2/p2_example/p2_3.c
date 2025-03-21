#include<stdio.h>

int main(){
    for(int x = 1;;x++){
        int n = x*x; //这个就是根据完全平方数来寻找
        if(n < 1000) continue;
        if(n > 9999) break;
        int hi = n /100; //高两位
        int lo = n %100; //低两位
        if(hi/10 == hi%10 && lo /10 == lo%10) printf("%d\n",n); 
    }

    return 0;
}