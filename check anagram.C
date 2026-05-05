#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    int count[256] = {0};

    scanf("%s %s", a, b);

    for(int i=0;a[i];i++)
        count[a[i]]++;

    for(int i=0;b[i];i++)
        count[b[i]]--;

    for(int i=0;i<256;i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
