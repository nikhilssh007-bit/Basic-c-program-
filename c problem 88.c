#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char url[50];
    gets(url);

    if (strncmp(url, "http", 4) == 0)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
