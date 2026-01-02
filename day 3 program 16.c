#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,bill;
    scanf("%d",&a);
    if(a<=100) 
    bill=a*1;
    else
    bill=a*2;
    printf("%d",bill);
    
    return 0;
}