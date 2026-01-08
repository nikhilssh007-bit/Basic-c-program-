#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if((n & 1)==0)
    printf("EVEN");
    else
    printf("ODD");
    return 0;
}