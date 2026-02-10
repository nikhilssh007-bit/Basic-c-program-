#include <stdio.h>
int main() {
    int N, temp, sum = 0, digits = 0;
    scanf("%d", &N);
    temp = N;

    for(int t = N; t > 0; t /= 10)
        digits++;

    for(; temp > 0; temp /= 10) {
        int rem = temp % 10, p = 1;
        for(int i = 1; i <= digits; i++)
            p *= rem;
        sum += p;
    }

    if(sum == N)
        printf("Yes");
    else
        printf("No");

    return 0;
}
