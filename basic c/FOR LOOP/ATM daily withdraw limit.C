#include <stdio.h>
int main() {
    //Your Code goes here!
    int N, amt, total = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&amt);
        total += amt;
    }
    if(total > 10000) 
    printf("Limit Exceded");
    else
    printf("Approved");
    return 0;
}
