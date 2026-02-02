#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
//Your Code goes here!
    char otp[10];
    int i, valid = 1;
    gets(otp);

    if (strlen(otp) != 6)
        valid = 0;

    for (i = 0; otp[i]; i++) {
        if (!isdigit(otp[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
