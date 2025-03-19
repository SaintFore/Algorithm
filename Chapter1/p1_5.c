#include<stdio.h>
#include<math.h>

int main(){
    const double pi = acos(-1.0); //用const声明常数
    double r, h, s1, s2, s;
    scanf("%lf%lf",&r,&h);  //在算法比赛中不要使用什么友好信息，比如说请输入之类的话
    s1 = 2 * pi * r * h;
    s2 = pi * r * r;
    s = s1 + s2 * 2;
    printf("%.3f\n",s); //每行输出均以回车符结束，包括最后一行。 行首不要有回车。
}

