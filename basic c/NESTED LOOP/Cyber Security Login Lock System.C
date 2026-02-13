#include<stdio.h>
int main(){
    int n,i=0,val,fail=0,totalFail=0,lock=-1;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&val);
        if(val==0){
            totalFail++;
            fail++;
            if(fail==3 && lock==-1)
                lock=i+1;
        } else fail=0;
        i++;
    }
    if(lock==-1)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n",lock);
    printf("Total Failed Attempts: %d",totalFail);
    return 0;
}
