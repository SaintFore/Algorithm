#include<stdio.h>
#include<string.h>
int main(){
    int count =0;
    char s[20], buf[99]; //c语言字符串以空字符\0结尾，所以字符个数加一。不过如果不知道就设置的大一些
    scanf("%s",s);//遇到空白字符会停下来
    for(int abc = 111; abc <=999; abc++){
        for(int de=11;de<=99;de++){
            int x = abc*(de%10), y = abc*(de/10), z = abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z); //sprintf输出到字符串
            int ok = 1;
            for(int i=0;i<strlen(buf);i++)//strlen返回的是\0前面的，也就是说buf[strlen(buf)]就是\0
                if(strchr(s,buf[i])==NULL) ok = 0; //strchr是在s里面找buf[i]，有一个没找到就说明失败了
            if(ok){
                printf("<%d>\n",++count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
            }
        }        
    }
    printf("The number of solutions = %d\n",count);
    return 0;
}