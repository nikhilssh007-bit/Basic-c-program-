#include <stdio.h>
int main() {
    //Your Code goes here!
    char ch;
    scanf(" %c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='o' || ch=='U')
       printf("VOWEL");
       else
       printf("NOT A VOWEL");
    
    return 0;
}