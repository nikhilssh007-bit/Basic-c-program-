#include<stdio.h>
int main(){
    int fuel,n,i=0,use,trips=0;
    scanf("%d%d",&fuel,&n);
    while(i<n){
        scanf("%d",&use);
        if(fuel-use<0) break;
        fuel-=use;
        trips++;
        i++;
    }
    printf("Completed Trips: %d\n",trips);
    printf("Remaining Fuel: %d",fuel);
    return 0;
}
