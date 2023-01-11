#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int count_sub_str(char *sub, char *src)
{
    int count = 0;
    int s_len = strlen(sub);
    while(*src != '\0')
    {
        if(strncmp(sub, src, s_len) == 0)
        {
            count++;
            src = src + s_len;
        }
        else
        {
            src++;
        }
    }
    return count;
}

int main(){
    char *sub;
    char src[MAX_SIZE];

    printf("input sub:\n");
    scanf("%s", src);
    sub = (char *)malloc(sizeof(char) * MAX_SIZE);

    if(NULL == sub)
    {
        printf("malloc error\n");
        exit(1);
    }

    printf("input sub:\n");
    scanf("%s", sub);

    int num = count_sub_str(sub, src);
    printf("%d\n", num);

    return 0;
}