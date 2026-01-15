#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,t,r=0;
    scanf("%d",&n);
    t=n;
    while(n!=0){ r=r*10+n%10; n/=10; }
    if(t==r) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
