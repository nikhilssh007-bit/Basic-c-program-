#include <stdio.h>
//Your Code goes here!
int bonus(int y) {
    if (y <= 2) return 1000;
    else if (y <= 4) return 3000;
    else if (y <= 6) return 7000;
    else if (y <= 9) return 10000;
    else return 15000;
}

int main() {
    int years;
    scanf("%d", &years);
    printf("%d", bonus(years));
    return 0;
}
