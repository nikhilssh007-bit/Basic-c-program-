#include <stdio.h>

int main() {
    // your code goes here!
    int a[] = {2, 3, 2};
    int n = 3, res = 0;

    for (int i = 0; i < n; i++)
        res ^= a[i];

    printf("%d", res);
    return 0;
}
