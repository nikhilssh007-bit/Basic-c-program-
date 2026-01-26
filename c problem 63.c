#include <stdio.h>
int main() {
    //Your Code goes here!
    int a, b;
    scanf("%d%d", &a, &b);

    for(int i=a;i<=b;i++) {
        int prime = 1;
        if(i < 2) continue;
        for(int j=2;j*j<=i;j++)
            if(i % j == 0) { prime = 0; break; }
        if(prime) printf("%d ", i);
    }
    return 0;
}
