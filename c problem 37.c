#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,a[100],x,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++) if(a[i]==x) f=1;
    if(f) printf("Found");
    else printf("Not Found");
    return 0;
}
