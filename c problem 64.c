
#include <stdio.h>
#include <math.h>
int main() {
    //Your Code goes here!
    int n, i = 0, dec = 0;
    scanf("%d", &n);

    while(n) {
        dec += (n % 10) * pow(2, i++);
        n /= 10;
    }
    printf("%d", dec);
    return 0;
}
   