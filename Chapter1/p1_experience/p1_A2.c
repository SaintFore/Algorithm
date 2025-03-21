#include<stdio.h>

int main(){
    // printf("%f\n", 11111*11111); //0.000000
    // printf("%f\n", 111111*111111); //0.000000
    //warning: integer overflow in expression of type 'int' results in '1653732529'
    //warning: format '%f' expects argument of type 'double', but argument 2 has type 'int'
    // printf("%f\n", 111111111*111111111); //0.000000
    return 0;
}

//也就是先会爆出int超了
//接着说预想的是double类型，但是给了个int类型