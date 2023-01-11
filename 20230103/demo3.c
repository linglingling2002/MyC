#include <stdio.h>
int main(){
    unsigned long a = 0;
    int p = 0;
    int v = 0;
    unsigned int count = 0;
    unsigned long method = 0x00000001;
    scanf("%ld %d %d", &a, &p, &v);

    method = method << (p - 1);
    if(v == 0){
        method = ~method;
        a = a & method;
    }else{
        a = a | method;
    }
    
    for(int i = 0;i < 32; i++){
        count = a & 0x80000000;
        count = count >> 31;
        a = a << 1;
        printf("%d", count);
        if((i % 4) == 3){
            printf(" ");
        }
    }
    printf("\n");
}