#include<stdio.h>
int main(){
    int n,i=1,prev,curr,drops=0,streak=0,crash=-1;
    scanf("%d",&n);
    scanf("%d",&prev);
    while(i<n){
        scanf("%d",&curr);
        if(curr<prev){
            drops++;
            streak++;
            if(streak==3 && crash==-1)
                crash=i+1;
        } else {
            streak=0;
        }
        prev=curr;
        i++;
    }
    if(crash==-1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n",crash);
    printf("Total Drops: %d",drops);
    return 0;
}
