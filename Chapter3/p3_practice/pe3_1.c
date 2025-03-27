#include<stdio.h>
#include<string.h>
#define maxn 1010

char s[maxn];

int main(){
    int score =0;
    scanf("%s",s);
    int len = strlen(s);
    int count = 1;
    for(int i=0;i<len;i++){
        if(s[i] == 'O'){
            score += count;
            count++;
        }
        else{
            count = 1;
        }
    }

    printf("Score: %d\n",score);
    return 0;
}