#include<stdio.h>
#include<math.h>

int main(){
    const double pi = acos(-1); //反余弦处-1为派，
    int n;
    scanf("%d",&n);
    printf("%f %f\n",sin(n*pi/180),cos(n*pi/180));
    return 0;
}