#include<stdio.h>

int main(){
    int a = 11;
    int b = 0;
    int c = 0;
    if(a) printf("true\n");
    else printf("false\n");
    if(b) printf("true\n");
    else printf("false\n"); 
    //以上可以说明在c语言中，非0的就是true，而0就是false。
    printf("%d\n",a||b||c); //而true就是1，false就是0，当用int型输出bool型时候

    // && 与 || 优先级辨析
    int x=1,y=1,z=0;
    int flag = x && z || y; //这里报错是因为希望我添加括号，让代码意图更清晰
    if(flag) printf("|| > &&\n");
    else printf("|| < &&\n"); 
    // 可以说明 与比或优先级高

    // && 与 ! 无法构建，怎么整都是一样的

    // ! > //
    // flag = !0||1 如果为1说明!>||，如果为0说明!<||
    return 0;


}