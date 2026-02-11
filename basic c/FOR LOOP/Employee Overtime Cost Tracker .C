#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, h,total = 0, heavy = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&h);
        total += h;
        if(h > 3) heavy++;
    }
     printf("Total Overtime Hours: %d\n", total);
     printf("Overtime Cost: %d\n", total*200);
     printf("Heavy Overtime Days: %d", heavy);
     return 0;
}
