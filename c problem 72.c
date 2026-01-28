#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[100], temp;
    int i, j;

    gets(s);

    for(i = 0; i < strlen(s) - 1; i++) {
        for(j = i + 1; j < strlen(s); j++) {
            if(s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s", s);
    return 0;
}
