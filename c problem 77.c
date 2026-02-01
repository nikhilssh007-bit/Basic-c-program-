#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char email[50];
    gets(email);

    if (strstr(email, "@company.com") != NULL)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}