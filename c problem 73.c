#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[200], word[50], longest[50];
    int i = 0, j = 0;

    gets(s);
    strcat(s, " ");

    while(s[i]) {
        if(s[i] != ' ')
            word[j++] = s[i];
        else {
            word[j] = '\0';
            if(strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}
