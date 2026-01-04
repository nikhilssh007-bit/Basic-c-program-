#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    scanf("%d",&age);
    if(age<13)
    printf("child");
    else if(age<20)
    printf("teen");
    else
    printf("adult");
    
    return 0;
}