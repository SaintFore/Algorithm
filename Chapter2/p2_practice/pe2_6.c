#include<stdio.h>

int main(){
    for(int i =1;i<=3;i++){
        //abc
        printf("%d%d%d",i,i*2,i*3);
        printf(" ");
    }
    printf("\n");
    for(int i =1;i<=3;i++){
        //acb
        printf("%d%d%d",i,i*3,i*2);
        printf(" ");
    }
    printf("\n");
    for(int i =1;i<=3;i++){
        //bac
        printf("%d%d%d",i*2,i*1,i*2);
        printf(" ");
    }
    printf("\n");
    for(int i =1;i<=3;i++){
        //bca
        printf("%d%d%d",i*2,i*3,i*1);
        printf(" ");
    }
    printf("\n");
    for(int i =1;i<=3;i++){
        //cab
        printf("%d%d%d",i*3,i*1,i*2);
        printf(" ");
    }
    printf("\n");
    for(int i =1;i<=3;i++){
        //cba
        printf("%d%d%d",i*3,i*2,i*1);
        printf(" ");
    }
    printf("\n");
    return 0;
}