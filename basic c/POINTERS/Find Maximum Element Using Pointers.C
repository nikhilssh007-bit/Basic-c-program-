#include <stdio.h>

int main()
{
    int n, arr[100];
    int *ptr;
    int i, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;
    max = *ptr;

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("%d", max);

    return 0;
}
