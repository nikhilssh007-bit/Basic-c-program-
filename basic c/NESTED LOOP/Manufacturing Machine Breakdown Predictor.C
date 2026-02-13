#include<stdio.h>
int main(){
    int n,i=0,val,unsafe=0,streak=0,breakdown=-1;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&val);
        if(val>70){
            unsafe++;
            streak++;
            if(streak==3 && breakdown==-1)
                breakdown=i+1;
        } else streak=0;
        i++;
    }
    if(breakdown==-1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n",breakdown);
    printf("Unsafe Readings: %d",unsafe);
    return 0;
}
