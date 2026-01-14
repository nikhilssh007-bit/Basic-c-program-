#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,i;
    scanf("%d", &n);
    long long fact = 1;
    scanf("%d", &n);
    for(i = 1; i <= n;i++)
    fact *= i;
    printf("%lld", fact);
    return 0;
    
    return 0;
}