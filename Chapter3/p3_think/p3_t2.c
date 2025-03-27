#include<stdio.h>
#include<string.h> //第一处错误
#define maxn 10000000 + 10

char s[maxn]; //对于大的数组一定是全局变量

int main(){
    // char s[maxn]; //在这里定义数组过大了，导致栈溢出。
    scanf("%s",s);
    int tot=0;
    int len = strlen(s);
    for(int i=0;i<len;i++) //这里使用strlen太慢了，这个是On2
        if(s[i] == 49) tot++; //c语言中数字也是用ascii存储的，1是49
    printf("%d\n",tot);
    return 0;
}