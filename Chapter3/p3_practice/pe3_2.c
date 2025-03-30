#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxn 1010

double singleM(char molar){
    if(molar == 'C') return 12.01;
    if(molar == 'H') return 1.008;
    if(molar == 'O') return 16;
    if(molar == 'N') return 14.01;
    return 0;
}


int main(){
    char str[maxn];
    double m = 0;
    scanf("%s",str);
    int len = strlen(str);
    for(int i =0; i< len;i++){
        // printf("%c ",str[i]);
        if(isalpha(str[i]) && !isdigit(str[i+1]))
            m += singleM(str[i]);
        else if(isalpha(str[i]) && isdigit(str[i+1])){
            double temp1 = singleM(str[i]);
            double temp2 = str[i+1] - 48;
            m += temp1 * temp2;
        }
        else
            m += 0;
    }
    printf("\n");
    
    printf("%.3lfg/mol\n",m);
  
}

