#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100];
    int max=0,index=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        int len=1;

        for(j=1;j<c;j++)
        {
            if((a[i][j]%2)!=(a[i][j-1]%2))
                len++;
        }

        if(len>max)
        {
            max=len;
            index=i;
        }
    }

    printf("%d",index);

    return 0;
}
