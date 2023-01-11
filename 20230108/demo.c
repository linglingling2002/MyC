#include <stdio.h>
#include <stdlib.h>

int continue_max_str(char *src)
{
    int len = 0;
    int max_len = 0;

    while(*src != '\0')
    {
        while((*src >= '0' && *src <= '9') && *src != '\0')
        {
            len++;
            src++;
        }

        if(len > max_len)
        {
            max_len = len;
        }

        len = 0;

        src++;
    }

    return max_len;
}

int main()
{
    char *str = (char *)malloc(sizeof(char) * 100);

    scanf("%s", str);

    printf("%s\n", str);

    int max_len = continue_max_str(str);

    printf("max len = %d\n", max_len);

    return 0;
}