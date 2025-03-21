#include<stdio.h>


int main(){
    int sum=0,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int factorial = 1;
        for(int j =1;j<=i;j++){
            factorial*=j;
        }
        sum += factorial;
    }
    
    printf("%d\n",sum % (int)1e6); //1e6是科学计数法，e后面是指数位，不过这个是一个double类型，我将其强转为int类型
    return 0;

}
