#include <stdio.h>
int main() {
    //Your Code goes here!
    int cash, N,w,risk=0;
    scanf("%d",&cash,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&w);
        cash -= w;
        if(cash < 5000) risk++;
    }
    printf("Remaining Cash: %d \n", cash);
    printf("Remaining Cash: %d",risk);
    return 0;
}
