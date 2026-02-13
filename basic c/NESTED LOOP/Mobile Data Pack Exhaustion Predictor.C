#include<stdio.h>
int main(){
    int data,n,i=0,use,day=-1;
    scanf("%d%d",&data,&n);
    while(i<n){
        scanf("%d",&use);
        data-=use;
        if(data<=0 && day==-1){
            day=i+1;
            break;
        }
        i++;
    }
    if(day==-1){
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0");
    } else {
        printf("Exhausted Day: %d\n",day);
        if(data<0) printf("Overused Data: %d",-data);
        else printf("Overused Data: 0");
    }
    return 0;
}
