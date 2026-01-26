#include <stdio.h>
int main() {
    //Your Code goes here!
    int n, bin[20], i = 0;
    scanf("%d", &n);

    while(n) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d", bin[j]);
    return 0;
}
