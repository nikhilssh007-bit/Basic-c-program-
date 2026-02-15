#include <stdio.h>
//Your Code goes here!
int bill(int units) {
    int amount = 0;

    if (units <= 100)
        amount = units * 5;
    else if (units <= 200)
        amount = (100 * 5) + (units - 100) * 7;
    else
        amount = (100 * 5) + (100 * 7) + (units - 200) * 10;

    return amount;
}

int main() {
    int units;
    scanf("%d", &units);
    printf("%d", bill(units));
    return 0;
}
