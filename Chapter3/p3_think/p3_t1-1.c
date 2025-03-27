#include<stdio.h>

int main(){
    float x;
    int count = 0;
    while(scanf("%f",&x) == 1) //ctrl + Z相当于EOF
        count++;
    printf("The input number is: %d\n",count);
    return 0;
}