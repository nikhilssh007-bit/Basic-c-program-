#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100],count=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        int inc=1;

        for(j=0;j<c-1;j++)
            if(a[i][j]>=a[i][j+1])
                inc=0;

        if(inc)
            count++;
    }

    printf("%d",count);

    return 0;
}
