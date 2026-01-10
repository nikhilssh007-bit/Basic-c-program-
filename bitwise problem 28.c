#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, rev = 0, temp;
    scanf("%d",&n);
    temp = n;
    while (temp){
        rev = (rev <<1) | (temp & 1);
        temp >>= 1;
    }
    if (rev == n)
    printf("yes");
    else
    printf("no");
    
    return 0;
}