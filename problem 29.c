#include <stdio.h>

int main() {
    //your codes goes here!
    int n = 5, count = 0, bits = 0;
    int temp = n;

    while (temp > 0) {
        bits++;
        if (temp & 1)
            count++;
        temp >>= 1;
    }

    printf("%d", bits - count);
    return 0;
}
