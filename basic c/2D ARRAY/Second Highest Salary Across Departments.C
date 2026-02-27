#include<stdio.h>
#include<limits.h>

int main(){
    int r,c,a[50][50];
    int max=INT_MIN, second=INT_MIN;

    scanf("%d%d",&r,&c);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>max){
                second=max;
                max=a[i][j];
            }
            else if(a[i][j]>second && a[i][j]!=max){
                second=a[i][j];
            }
        }
    }

    printf("%d",second);

    return 0;
}
