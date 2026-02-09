#include <stdio.h>
int main() {
    //Your Code goes here!
    int type;
    scanf("%d",&type);
    if(type == 1)
    printf("admin");
    else if(type == 2)
    printf("user");
    else
    printf("guest");
    return 0;
}
