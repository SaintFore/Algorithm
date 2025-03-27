#include<stdio.h>
#include<stdlib.h>
#define MAXN 10100

int main(){
    int x,n=0;
    int a[MAXN];
    while(scanf("%d",&x) == 1)
        a[n++] = x;
    
    int min_dif=MAXN;
    int id1=0, id2 =1;
    for(int i=0; i < n;i++){
        for(int j=i+1;j<n;j++){ //不需要比较i之前以及本身了，因为之前已经比较过了
            int dif = abs(a[i]-a[j]);
            if(dif < min_dif){
                min_dif = dif;
                id1 = i;
                id2 = j;
            }
        }
    }

    printf("The most closed number is %d and %d, and the difference between them is %d\n",a[id1],a[id2],abs(a[id1]-a[id2]));

    return 0;
}