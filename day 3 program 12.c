#include <stdio.h>
int main() {
    //Your Code goes here!
    int salary;
    scanf("%d", &salary);

    if (salary >= 20000)
        salary += 2000;
    else
        salary += 1000;

    printf("%d", salary);

    return 0;
}