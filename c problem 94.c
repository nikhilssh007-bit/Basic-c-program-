#include <stdio.h>
//Your Code goes here!
int tax(int income) {
    if (income <= 200000)
        return 0;
    else if (income <= 500000)
        return income * 5 / 100;
    else if (income <= 800000)
        return income * 10 / 100;
    else
        return income * 15 / 100;
}

int main() {
    int income;
    scanf("%d", &income);
    printf("%d", tax(income));
    return 0;
}
