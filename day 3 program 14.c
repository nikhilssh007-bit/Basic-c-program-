#include <stdio.h>
int main() {
    //Your Code goes here!
    int m;
    scanf("%d",&m);
    if(m>=90)
    printf("A");
    else if(m>=75)
    printf("B");
    else if(m>=50)
    printf("C");
    else
    printf("FAIL");
    
    return 0;
}