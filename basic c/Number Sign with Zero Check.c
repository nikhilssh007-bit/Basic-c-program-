#include <stdio.h>
int main() {
    //Your Code goes here!
    int number;
    scanf("%d",&number);
    if(number > 0)
    printf("positive");
    else if(number < 0)
    printf("negative");
    else
    printf("neutral");
    return 0;
}
