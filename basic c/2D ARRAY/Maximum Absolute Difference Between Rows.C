#include<stdio.h>

int main()
{
    int r,c,i,j,k,l,a[100][100];
    int max=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=i+1;k<r;k++)
            {
                for(l=0;l<c;l++)
                {
                    int diff=a[i][j]-a[k][l];
                    if(diff<0) diff=-diff;

                    if(diff>max)
                        max=diff;
                }
            }
        }
    }

    printf("%d",max);

    return 0;
}
