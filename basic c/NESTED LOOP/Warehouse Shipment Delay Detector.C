#include<stdio.h>
int main(){
    int n,i=0,delay,total=0,days=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&delay);
        total+=delay;
        if(delay>2) days++;
        i++;
    }
    printf("Total Delay: %d\n",total);
    printf("Delayed Days: %d",days);
    return 0;
}
