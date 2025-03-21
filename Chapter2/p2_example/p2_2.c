#include<stdio.h>
#include<math.h>

int main(){
    for(int i = 1; i < 10; i++){
        for(int j = 0; j <10; j++){
            int n = i*1100 + j*11;
            int m = floor(sqrt(n) + 0.5); //浮点数运算很容易把1变成小一些的数
            //加上0.5让floor的区间左移，原本floor(x) == 1 区间为[1,2)
            //现在是[0.5,1.5]，这里是考虑到浮点数的运算误差了
            //不考虑可以写成if(sqrt(n) == floor(sqrt(n)))
            if(m*m == n) printf("%d\n",n);
        }
    }

    return 0;
}