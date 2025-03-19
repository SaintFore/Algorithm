#include<stdio.h>

int main(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b){
        t = a;
        a = b;
        b = t; //假设a是最小的，然后依次增大。但现在比b大，就两者交换
    }
    if(a > c){
        t = a;
        a = c;
        c = t;
    }
    if(b > c){
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}