#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char f[50];
    gets(f);

    if (strstr(f, ".txt") != NULL)
        printf("Yes");
    else
        printf("No");

    return 0;
}
