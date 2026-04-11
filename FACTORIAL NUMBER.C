#include <stdio.h>

int main()
{
    int i, num = 5, fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
