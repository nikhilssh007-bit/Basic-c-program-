#include <stdio.h>
int main(){
    int N, r, total=0, high=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&r);
        total += r;
        if(r > 50) high++;
    }
    printf("Total Risk: %d\n", total);
    printf("High Risk Sessions: %d", high);
}
