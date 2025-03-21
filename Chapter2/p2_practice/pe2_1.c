#include<stdio.h>

int cube(int n){return n*n*n;}

int main(){
    for(int i = 100;i<=999;i++){
        if(i == cube(i/100) + cube(i/10%10) + cube(i%10)) //使用pow也可以但是这样更快
            printf("%d\n",i);
    }
    return 0;
}
