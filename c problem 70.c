#include <stdio.h>
int main() {
    //Your Code goes here!
    char s[100];
    int freq[256] = {0};
    gets(s);

    for(int i=0; s[i]; i++)
        freq[s[i]]++;

    for(int i=0;i<256;i++)
        if(freq[i] > 0)
            printf("%c %d ", i, freq[i]);

    return 0;
}
