#include<stdio.h>

int main(){
    int v1, v2, v3;
    int count = 1;  // 标记是第几个用例
    
    // scanf返回成功读取的项目数，读到文件结束时返回EOF
    while(scanf("%d%d%d", &v1, &v2, &v3) == 3) {
        int found = 0;  // 标记是否找到答案
        for(int i = 10; i <= 100; i++){
            if(i % 3 == v1 && i % 5 == v2 && i % 7 == v3){
                printf("Case %d: %d\n", count++,i);
                found = 1;
                break;
            }
        }
        
        if(!found) {
            printf("Case %d: No answer\n",count++);
        }
    }
    
    return 0;
}