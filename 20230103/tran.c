#include <stdio.h>
char * tran(unsigned int num){
    unsigned int temp = 0xf;
    unsigned int count = 0;
    static char hex[11];
    hex[0] = '0';
    hex[1] = 'X';
    hex[10] = '\0';

    for(int i = 0; i < 8; i++){
        count = temp & num;
        if(count >= 10){
            hex[9 - i] = count - 10 + 'A';
        }else{
            hex[9 - i] = count + '0';
        }
        num = num >> 4;
    }
    return hex;
}
int main(){
    unsigned int a = 0;
    scanf("%d", &a);
    char *addr = tran(a);
    printf("%s\n", addr);
    return 0;
}