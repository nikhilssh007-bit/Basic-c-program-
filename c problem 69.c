#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char s[200], word[50], small[50], large[50];
    int i=0, j=0;

    gets(s);
    strcat(s, " ");

    while(s[i]) {
        if(s[i] != ' ')
            word[j++] = s[i];
        else {
            word[j] = '\0';
            if(strlen(word)) {
                if(!strlen(small) || strlen(word) < strlen(small))
                    strcpy(small, word);
                if(strlen(word) > strlen(large))
                    strcpy(large, word);
            }
            j = 0;
        }
        i++;
    }
    printf("Largest: %s, Smallest: %s", large, small);
    return 0;
}
