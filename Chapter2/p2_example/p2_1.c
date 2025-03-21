#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) //可以使用gdb调试，终端进入output文件夹，使用 gdb p2_1即可使用
        printf("%d\n",i);
    // b打断点，cl取消断点，r开始程序直到断点处，c中断后继续程序直到断点
    //n执行一条语句遇到函数认为是一个整体
    //s跟n差不多不过遇到函数会进入函数中继续执行
    return 0;
}