#include <stdio.h>
int main() {
    //Your Code goes here!
    char s[100];
    int i, count = 0;
    gets(s);

    if (s[0] != '\0')
        count = 1;

    for (i = 0; s[i]; i++) {
        if (s[i] == ' ')
            count++;
    }

    printf("%d", count);
    return 0;
}
