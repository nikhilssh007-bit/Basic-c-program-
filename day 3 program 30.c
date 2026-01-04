#include <stdio.h>
int main() {
    //Your Code goes here!
    int s;
    scanf("%d",&s);
    if(s>=50000)
    s=s-(s*10)/100;
    printf("%d",s);
    
    return 0;
}