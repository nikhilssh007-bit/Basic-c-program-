#include <stdio.h>
int main() {
    //Your Code goes here!
    int n,a[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%d",&a[i]); if(a[i]%2!=0) c++; }
    printf("%d",c);
    return 0;
}
