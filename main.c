#include <stdio.h>

int main(){
    printf("aaa");
    printf("Hello World!");

    int flag = 0;
    for(int i = 0; i < 10; i++){
        if(flag == 1){
            printf("HelloWorld!\n");
        }
    }
    return 0;
}