#include <stdio.h>

int main(){
    unsigned long a = 0;
    int p1 = 0;
    int p2 = 0;
    unsigned long count = 0;
    scanf("%ld %d %d", &a, &p1, &p2);

    a = a + 0x00000000;
    printf("a = %lx\n", a);
    a = a << (32 - p2);
    printf("a = %lx\n", a);

    for(int i = 0;i < p2 - p1 + 1; i++){
        count = a & 0x80000000;
    //    printf("%lx ",count);
        count = count >> 31;
        printf("%lx",count);
        a = a << 1;
    }
    printf("\n");
    return 0;
}