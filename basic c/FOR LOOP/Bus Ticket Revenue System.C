#include <stdio.h>
int main(){
//Your code goes here!
    int N, fare, total=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&fare);
        total += fare;
    }
    printf("Total Collection: ₹%d", total);
}
