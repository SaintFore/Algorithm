#include<stdio.h>

int main(){
    printf("%d\n", 1+2);  //3
    printf("%d\n", 3-4);  //-1
    printf("%d\n", 5*6);  //30
    printf("%d\n", 8/4);  //2
    printf("%d\n", 8/5);  //1 这里是因为输入的是整数，所以小数位被舍弃
    return 0;
}
