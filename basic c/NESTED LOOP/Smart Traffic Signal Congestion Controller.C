#include<stdio.h>
int main(){
    int n,i=0,veh,cong=0,streak=0,maxStreak=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&veh);
        if(veh>20){
            cong++;
            streak++;
            if(streak>maxStreak)
                maxStreak=streak;
        } else {
            streak=0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n",cong);
    printf("Longest Congestion Streak: %d",maxStreak);
    return 0;
}
