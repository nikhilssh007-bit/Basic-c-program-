#include<stdio.h>

int main(){
    int r,c,a[50][50];
    int maxProduct=-999999;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            for(int k=i+1;k<r;k++)
                for(int l=0;l<c;l++){
                    int p=a[i][j]*a[k][l];
                    if(p>maxProduct)
                        maxProduct=p;
                }

    printf("%d",maxProduct);

    return 0;
}
