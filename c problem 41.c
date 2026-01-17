#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, a[100], i, count = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
        scanf("%d",a[i]);
        if(a[i] < 0)
        count++;
    }
    printf("%d", count);
    return 0;
}