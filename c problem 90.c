#include <stdio.h>
int main() {
    //Your Code goes here!
    char s[100];
    int i;
    gets(s);

    for (i = 0; s[i]; i++) {
        if (s[i] != ' ')
            printf("%c", s[i]);
    }
       return 0;
}