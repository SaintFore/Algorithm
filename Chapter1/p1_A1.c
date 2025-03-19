#include<stdio.h>

int main(){
    printf("%d\n", 11111*11111); //123454321
    //warning: integer overflow in expression of type 'int' results in '-539247567'
    // printf("%d\n", 111111*111111); //-539247567
    //warning: integer overflow in expression of type 'int' results in '1653732529'
    // printf("%d\n", 111111111*111111111); //1653732529
    return 0;
}