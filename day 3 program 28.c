#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n>0 && n%2==0)
    printf("POSITIVE EVEN");
    else if(n>0 && n%2!=0)
    printf("POSITIVE ODD");
    else
    printf("negative");
    return 0;
}