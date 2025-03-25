#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    printf("%d %d %d\n",++count,++count,++count); //3 3 3
    count = 0;
    printf("%d %d %d\n",count++,count++,count++); //2 1 0
    count = 0;
    count = count++; // 0 也是与上面同样的道理
    printf("%d",count);
    return 0;
}