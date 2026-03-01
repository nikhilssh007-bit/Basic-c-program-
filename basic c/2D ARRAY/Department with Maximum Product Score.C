#include<stdio.h>

int main()
{
    int r,c,a[50][50];
    long long maxProduct=-999999,index=0;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
    {
        long long product=1;

        for(int j=0;j<c;j++)
            product*=a[i][j];

        if(product>maxProduct)
        {
            maxProduct=product;
            index=i;
        }
    }

    printf("%d",index);

    return 0;
}
