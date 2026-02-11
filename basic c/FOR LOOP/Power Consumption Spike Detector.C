#include <stdio.h>
int main(){
    int N, u, total=0, spike=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&u);
        total += u;
        if(u > 5) spike++;
    }
    printf("Total Units: %d\n", total);
    printf("Spike Hours: %d", spike);
}
