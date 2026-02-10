#include <stdio.h>
int main() {
    int N, base = 1, dec = 0;
    scanf("%d", &N);

    for(; N > 0; N /= 10) {
        dec += (N % 10) * base;
        base *= 2;
    }

    printf("%d", dec);
    return 0;
}
