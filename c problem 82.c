#include <stdio.h>
#include <ctype.h>
int main() {
    //Your Code goes here!
    char name[50];
    int i;
    gets(name);

    name[0] = toupper(name[0]);
    for (i = 1; name[i]; i++)
        name[i] = tolower(name[i]);

    printf("%s", name);
    return 0;
}
