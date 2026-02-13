#include<stdio.h>
int main(){
    int total,n,i=0,use,days=0;
    scanf("%d%d",&total,&n);
    while(i<n){
        scanf("%d",&use);
        if(total-use<0) break;
        total-=use;
        days++;
        if(total==0) break;
        i++;
    }
    printf("Days Used: %d\n",days);
    printf("Remaining Data: %dGB",total);
    return 0;
}
