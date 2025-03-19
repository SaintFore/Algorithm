#include<stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b); //可以在下面的终端中输入两个数字。不要漏掉&
    //不过你当然可以漏掉，学习也需要明知故犯，然后你才能记得牢靠。
    //对于下面我的明知故犯
    //scanf("%d%d", &a, b);
    //编译器会提醒我：
    //warning: format '%d' expects argument of type 'int *', but argument 3 has type 'int' [-Wformat=]
    // warning: 'b' is used uninitialized [-Wuninitialized]
    printf("%d\n", a+b);
    return 0;
}