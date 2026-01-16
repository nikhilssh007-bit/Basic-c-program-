#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
