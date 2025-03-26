#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 "; // 26个字母和10个数字的镜像字符
// msg是一个字符串数组，用来存储输出的结果，也是一个二维字符数组
const char* msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};
char r(char ch){
    if(isalpha(ch)) return rev[ch - 'A'];
    return rev[ch - '0' + 25];
}

int main(){
    char s[30];
    while(scanf("%s", s) == 1){
        int len = strlen(s);
        int p = 1, m = 1;
        for(int i = 0; i < (len + 1) / 2; i++){
            if(s[i] != s[len - 1 - i]) p = 0; // 判断是否为回文串
            if(r(s[i]) != s[len - 1 - i]) m = 0; // 判断是否为镜像串
        }
        printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
    }      
    return 0;
}