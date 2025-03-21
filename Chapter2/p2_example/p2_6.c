#include<stdio.h>

int main(){
    double sum = 0;
    //for版本
    // for(int i=0;;i++){
    //     double term = 1.0 / (i*2+1);  //这里必须是1.0不然就是一个整数，在i不为0的时候，除了term就成了0了，直接就break了。
    //     if(i%2==0) sum +=term;
    //     else sum -=term;
    //     if(term < 1e-6) break;
    // }
    //do while版本
    double term = 0;
    int i = 0;
    do{
        term = 1.0 /(i*2+1);
        if(i%2==0) sum += term;
        else sum -=term;
        i++;
    }while(term >= 1e-6);
    printf("%.6f\n",sum);
    return 0;
}