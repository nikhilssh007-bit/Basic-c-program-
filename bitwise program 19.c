#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, k;
    scanf("%d",&n,&k);
    if(n & (1 << k))
    printf("set");
    else
    printf("not set");
    
    return 0;
}