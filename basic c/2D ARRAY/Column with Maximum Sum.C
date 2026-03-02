#include<stdio.h>

int main(){
    int r,c,i,j;
    int a[100][100];
    int maxSum=-100000000,index=0;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(j=0;j<c;j++){
        int sum=0;
        for(i=0;i<r;i++)
            sum+=a[i][j];

        if(sum>maxSum){
            maxSum=sum;
            index=j;
        }
    }

    printf("%d",index);

    return 0;
}
