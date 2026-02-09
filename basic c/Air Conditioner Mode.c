#include <stdio.h>
int main() {
    //Your Code goes here!
    int mode;
    scanf("%d",&mode);
    if(mode < 20)
    printf("heating mode");
    else if(mode < 30)
    printf("normal mode");
    else
    printf("cooling mode");
    return 0;
}
