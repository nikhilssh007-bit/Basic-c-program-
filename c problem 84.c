#include <stdio.h>
#include <ctype.h>
int main() {
    //Your Code goes here!
    char s[100];
    gets(s);

    s[0] = toupper(s[0]);
    printf("%s", s);

    return 0;
}
