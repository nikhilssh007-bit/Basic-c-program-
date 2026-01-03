#include <stdio.h>
int main() {
    //Your Code goes here!
    int bill;
    scanf("%d",&bill);
    if(bill>=5000)
    bill=bill-(bill*10)/100;
    else
    bill=bill-(bill*5)/100;
    printf("%d",bill);
    
    return 0;
}