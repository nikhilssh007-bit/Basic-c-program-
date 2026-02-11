#include <stdio.h>
int main(){
    int N, c, total=0, over=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&c);
        total += c;
        if(c > 40) over++;
    }
    printf("Total Calls: %d\n", total);
    printf("Overloaded Hours: %d", over);
}
