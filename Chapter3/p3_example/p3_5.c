#include<stdio.h>

int main(){
    int c, q=1;
    while((c = getchar()) != EOF){ //getchar()等价于fgetc(stdin)
        if(c == '"'){
            printf("%s", q?"``":"''");
            q = !q; //这个就是标志变量，实现左右翻转，配合上上面的三目运算符，实现先左后右
        }
        else printf("%c",c);
    }
    return 0;
}