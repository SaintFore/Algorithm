#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b); //输入12 2是可以得到想要的答案的，换行也是可以的
    printf("%d %d\n",a,b);
    return 0;
}
//把2换成s也是一样的，对于int型，多少空格都不影响，但是char型就不行了。