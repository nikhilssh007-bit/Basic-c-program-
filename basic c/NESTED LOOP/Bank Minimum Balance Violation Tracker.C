#include<stdio.h>
int main(){
    int n,i=0,bal,trans,lowDays=0;
    scanf("%d%d",&n,&bal);
    while(i<n){
        scanf("%d",&trans);
        bal+=trans;
        if(bal<2000)
            lowDays++;
        i++;
    }
    printf("Final Balance: %d\n",bal);
    printf("Low Balance Days: %d",lowDays);
    return 0;
}
