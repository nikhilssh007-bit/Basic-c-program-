#include<stdio.h>
int main(){
    int cap,n,i=0,load,safe=0,fail=0;
    scanf("%d%d",&cap,&n);
    while(i<n){
        scanf("%d",&load);
        if(load>cap) fail++;
        else safe++;
        i++;
    }
    printf("Safe Hours: %d\n",safe);
    printf("Failure Count: %d",fail);
    return 0;
}
