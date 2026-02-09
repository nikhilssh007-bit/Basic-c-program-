#include <stdio.h>
int main() {
    //Your Code goes here!
    int ticket;
    scanf("%d",&ticket);
    if(ticket <= 0)
    printf("waiting list");
    else 
    printf("confirmed");
    return 0;
}
