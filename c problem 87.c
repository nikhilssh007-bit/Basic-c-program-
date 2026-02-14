#include <stdio.h>
int main() {
    //Your Code goes here!
    char s[50];
    int i, count = 0;
    gets(s);

    for (i = 0; s[i]; i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            count++;
    }

    printf("%d", count);
    return 0;
}
