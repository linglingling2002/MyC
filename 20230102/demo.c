#include <stdio.h>

int main(){
    unsigned int usi_num = 5;
    signed int si_num = -5;
    int i = 0;
    int array[3] = {1,2,3};

    short s_num = 4;
    long l_num = 12345678;

    char src[100] = "hello";
    char *ptr = "hello";

    printf("usi_num = %u\n",usi_num);
    printf("si_num = %d\n",si_num);
    printf("s_num = %d\n",s_num);
    printf("l_num = %ld\n",l_num);
    printf("*ptr = %s\n",ptr);

    for(i = 0;i < 3;i++){
        printf("array[%d] = %d\n",i,array[i]);

    }
    for(i = 0;i < 6;i++){
        printf("src[%d] = %c\n",i,src[i]);
    }

    return 0;
}