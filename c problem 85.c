#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[100];
    gets(s);

    if (strstr(s, "error") != NULL)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
