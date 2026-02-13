#include<stdio.h>
int main(){
    int n,i=0,val,streak=0,maxStreak=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&val);
        if(val==0){
            streak++;
            if(streak>maxStreak)
                maxStreak=streak;
        } else {
            streak=0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d",maxStreak);
    return 0;
}
