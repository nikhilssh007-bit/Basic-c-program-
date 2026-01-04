#include <stdio.h>
int main() {
    //Your Code goes here!
    int n;
    scanf("%d",&n);
    if(n%4==0 && n%8!=0)
    printf("yes");
    else
    printf("no");
    
    return 0;
}