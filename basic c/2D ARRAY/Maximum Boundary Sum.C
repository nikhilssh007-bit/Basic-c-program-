#include<stdio.h>

int main()
{
    int r,c,i,j,a[100][100];
    int sum=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<c;i++)
        sum+=a[0][i];

    for(i=1;i<r;i++)
        sum+=a[i][c-1];

    for(i=c-2;i>=0;i--)
        sum+=a[r-1][i];

    for(i=r-2;i>0;i--)
        sum+=a[i][0];

    printf("%d",sum);

    return 0;
}
