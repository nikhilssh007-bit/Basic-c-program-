#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    scanf("%d",&marks);
    if(marks < 40)
    printf("fail");
    else if(marks <= 80)
    printf("pass");
    else
    printf("distinction");
    return 0;
}
