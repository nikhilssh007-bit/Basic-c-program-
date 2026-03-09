#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start,*end;

    scanf("%s",str);

    start = str;
    end = str + strlen(str) - 1;

    while(start < end)
    {
        if(*start != *end)
        {
            printf("NO");
            return 0;
        }
        start++;
        end--;
    }

    printf("YES");

    return 0;
}
