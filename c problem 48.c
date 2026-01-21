#include <stdio.h>
int main() {
    //Your Code goes here!
    char str1[100], str2[100];
    int i, equal = 1;

    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
