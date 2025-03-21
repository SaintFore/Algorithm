#include<stdio.h>
#include<math.h>  // 数学函数的头文件

int main(){
    printf("%.8f\n", 1+2*sqrt(3)/(5-0.1)); //做运算时，当整数遇到浮点数，整数会先编程浮点数，在进行运算。
    return 0;
}