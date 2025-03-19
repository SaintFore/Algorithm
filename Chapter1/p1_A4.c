#include<stdio.h>

int main(){
    // printf("%d %d\n",1.0/0,0.0/0.0); //0 0
    // printf("%f %f\n",1.0/0,0.0/0.0);  //inf nan
    // printf("%lf %lf\n",1.0/0,0.0/0.0); //inf nan
    //通过实验可以看到涉及到了浮点数的输出，存在inf和nan这是因为IEEE754定义了，但是像%d就没有。
    return 0;
}