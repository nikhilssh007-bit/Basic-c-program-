#include <stdio.h>
#include <math.h>
int main() {
    //Your Code goes here!
    int n, temp, sum = 0, d = 0;
    scanf("%d", &n);
    temp = n;

    while(temp) { d++; temp /= 10; }
    temp = n;

    while(temp) {
        sum += pow(temp % 10, d);
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
