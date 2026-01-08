#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,count = 0;
    scanf("%d", &n);
    while (n) {
        count++;
        n=n&(n-1);
    }
    printf("%d", count);
    return 0;
}