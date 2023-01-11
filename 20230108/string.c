#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ptr = "hello";
    char src[100] = "hello";
    char *str = (char *)malloc(sizeof(char) * 100);
    strcpy(str, "hello");

    printf("hello = %p\n", "hello");
    printf("ptr = %p\n", ptr);
    printf("ptr = %p\n", src);
    printf("ptr = %p\n", str);
}