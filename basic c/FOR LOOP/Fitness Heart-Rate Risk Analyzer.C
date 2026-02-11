#include <stdio.h>
int main(){
    int N, h, max=0, danger=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&h);
        if(h > max) max = h;
        if(h > 140) danger++;
    }
    printf("Max Heart Rate: %d\n", max);
    printf("Danger Readings: %d", danger);
}
