#include <stdio.h>
int main(){
    int N, n, max=0, noisy=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&n);
        if(n > max) max = n;
        if(n > 70) noisy++;
    }
    printf("Maximum Noise: %d\n", max);
    printf("Noisy Periods: %d", noisy);
}
