#include <stdio.h>
int main(){
    int cap, N, items, over=0;
    scanf("%d%d",&cap,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&items);
        cap -= items;
        if(cap < 0) over++;
    }
    printf("Remaining Capacity: %d\n", cap);
    printf("Overflow Days: %d", over);
}
