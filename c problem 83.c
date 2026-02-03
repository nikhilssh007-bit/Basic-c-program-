#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[50];
    int i, j, flag = 0;
    gets(s);

    for (i = 0; s[i]; i++) {
        for (j = i+1; s[j]; j++) {
            if (s[i] == s[j]) {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
        printf("Duplicates found");
    else
        printf("No duplicates");

    return 0;
}
