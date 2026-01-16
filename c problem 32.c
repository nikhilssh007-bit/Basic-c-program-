#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,a[100],s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); s+=a[i]; }
    printf("%d",s);
    return 0;
}
