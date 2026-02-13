#include<stdio.h>
int main(){
    int bal,n,i=0,amt,count=0;
    scanf("%d%d",&bal,&n);
    while(i<n){
        scanf("%d",&amt);
        if(bal-amt<0) break;
        bal-=amt;
        count++;
        i++;
    }
    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",bal);
    return 0;
}
