#include<stdio.h>
int main(){
    //Your Code goes here!
    int n,i=0,noise,violations=0,streak=0,maxStreak=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&noise);
        if(noise>70){
            violations++;
            streak++;
            if(streak>maxStreak)
                maxStreak=streak;
        } else {
            streak=0;
        }
        i++;
    }
    printf("Noise Violations: %d\n",violations);
    printf("Longest Violation Streak: %d",maxStreak);
    return 0;
}
