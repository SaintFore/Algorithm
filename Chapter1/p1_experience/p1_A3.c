#include<stdio.h>
#include<math.h>

int main(){
    // int t1;
    // t1 = sqrt(-10);
    // printf("%d\n",t1); //-2147483648
    // printf("%f\n",t1); //0.000000

    float t2;
    t2 = sqrt(-10);
    // printf("%d\n",t2); //0
    printf("%f\n",t2); //这个是正确答案
    return 0;
}