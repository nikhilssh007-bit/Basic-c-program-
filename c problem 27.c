#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,f=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
        if(n%i==0){ f=1; break; }
    if(f==0 && n>1) printf("Prime");
    else printf("Not Prime");
    return 0;
}
