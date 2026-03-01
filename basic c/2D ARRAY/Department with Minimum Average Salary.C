#include<stdio.h>

int main()
{
    int r,c,a[50][50];
    float minAvg=999999;
    int index=0;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
    {
        int sum=0;

        for(int j=0;j<c;j++)
            sum+=a[i][j];

        float avg=(float)sum/c;

        if(avg<minAvg)
        {
            minAvg=avg;
            index=i;
        }
    }

    printf("%d",index);

    return 0;
}
