#include <stdio.h>

char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    int i, c;
    while ((c = getchar()) != EOF)
    {
        for (i = 0; s[i] && s[i] != c; i++)
            ; //注意这个分号，这个for循环没有循环体，是一个搜索循环。
        if (s[i])
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}
