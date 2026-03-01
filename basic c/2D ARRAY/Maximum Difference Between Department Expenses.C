#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c,a[50][50],sum[50];

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
    {
        sum[i]=0;
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }

    int maxDiff=0;

    for(int i=0;i<r;i++)
        for(int j=i+1;j<r;j++)
        {
            int diff=abs(sum[i]-sum[j]);
            if(diff>maxDiff)
                maxDiff=diff;
        }

    printf("%d",maxDiff);

    return 0;
}
