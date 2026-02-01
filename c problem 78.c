#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char p[50];
    int u=0, l=0, d=0, i;
    gets(p);

    if (strlen(p) < 8) {
        printf("Weak");
        return 0;
    }

    for (i = 0; p[i]; i++) {
        if (isupper(p[i])) u=1;
        if (islower(p[i])) l=1;
        if (isdigit(p[i])) d=1;
    }

    if (u && l && d)
        printf("Strong");
    else
        printf("Weak");

    return 0;
}
