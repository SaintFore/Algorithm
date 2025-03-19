#include<stdio.h>

int main(){
    // printf("%.1f\n", 8/5);  //这个是无法编译通过的，因为后面都是int类型。但会给出一个数 0.0
    printf("%.1f\n", 8.0/5);
    printf("%.2f\n", 8.0/5.0);
    // printf("%d\n", 8.0/5.0);  编译器会报错，但是会给出一个数 -1717986918

    return 0;
}