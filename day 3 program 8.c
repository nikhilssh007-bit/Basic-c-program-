#include <stdio.h>
int main() {
    //Your Code goes here!
    int year;
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 !=0)||(year % 400 == 0))
    printf("LEEP YEAR");
    else
    printf("NOT A LEEP YEAR");
    return 0;
}