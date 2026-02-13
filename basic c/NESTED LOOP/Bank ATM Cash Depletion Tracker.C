#include<stdio.h>
int main(){
    int cash,n,i=0,amt,count=0;
    scanf("%d%d",&cash,&n);
    while(i<n){
        scanf("%d",&amt);
        if(cash-amt<0) break;
        cash-=amt;
        count++;
        i++;
    }
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d",cash);
    return 0;
}
