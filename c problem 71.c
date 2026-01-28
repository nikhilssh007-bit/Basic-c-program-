#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char a[100], b[100];
    int f1[256]={0}, f2[256]={0};

    gets(a);
    gets(b);

    if(strlen(a) != strlen(b)) {
        printf("Not Anagram");
        return 0;
    }

    for(int i=0;a[i];i++) {
        f1[a[i]]++;
        f2[b[i]]++;
    }

    for(int i=0;i<256;i++)
        if(f1[i] != f2[i]) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
