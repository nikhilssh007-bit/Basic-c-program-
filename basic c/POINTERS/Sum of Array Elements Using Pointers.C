#include <stdio.h>

int main()
{
    int n,i,sum=0;
    int arr[100];
    int *ptr;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    ptr = arr;

    for(i=0;i<n;i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("%d",sum);

    return 0;
}
