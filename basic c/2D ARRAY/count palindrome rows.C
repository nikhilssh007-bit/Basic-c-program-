#include<stdio.h>

int main(){
    int r,c,i,j;
    int a[100][100];
    int count=0;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        int pal=1;
        for(j=0;j<c/2;j++){
            if(a[i][j] != a[i][c-1-j]){
                pal=0;
                break;
            }
        }
        if(pal)
            count++;
    }

    printf("%d",count);

    return 0;
}
