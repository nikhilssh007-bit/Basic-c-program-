#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[50];
    int i, len, flag = 1;
    gets(s);

    len = strlen(s);

    for (i = 0; i < len/2; i++) {
        if (s[i] != s[len-i-1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
