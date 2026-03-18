#include <stdio.h>
//Your Code goes here!
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", add(a, b));
    printf("%d\n", sub(a, b));
    printf("%d\n", mul(a, b));
    printf("%d\n", div(a, b));

    return 0;
}
