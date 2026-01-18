#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, a[100], i;
    float sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.0f", sum / n);    
    return 0;
}