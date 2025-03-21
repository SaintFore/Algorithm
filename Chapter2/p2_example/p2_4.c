#include<stdio.h>

int main(){
    int count = 0;
    int n;
    scanf("%d",&n);
    while(n>1){
        if(n%2==1) n = 3*n+1;
        else n/=2;
        count++;
    }
    printf("%d\n",count);
    return 0;
}