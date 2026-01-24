#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n&(1<<31))
    printf("set");
    else
    printf("not set");
    
    return 0;
}
