#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, d, total = 0, dalayed = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&d);
        total += d;
        if(d > 30) 
        delayed++;
    }
    printf("Total Delay: %d \n",total);
    printf("Total Delay: %d \n",total);
    return 0;
}
