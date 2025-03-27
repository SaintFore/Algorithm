#include<stdio.h>
#define MAX 1e20

int main(){
    // printf("%.1lf\n",MAX);
    double x;
    double sum =0;
    int count = 0;
    double max = -MAX;
    double min = MAX;
    while (scanf("%lf",&x) == 1){
        sum += x;
        count++;
        if(x > max) max = x;
        if(x < min) min = x;
    }
    printf("The minmum is: %.3lf\nThe maximum number is: %.3lf\nThe average number is: %.1lf\n", min, max, sum /count);
    return 0;
    
}