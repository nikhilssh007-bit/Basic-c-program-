#include <stdio.h>
int main() {
    //Your Code goes here!
    int attempts;
    scanf("%d",&attempts);
    if(attempts >= 3)
    printf("account locked");
    else
    printf("login allowed");
    return 0;
}
