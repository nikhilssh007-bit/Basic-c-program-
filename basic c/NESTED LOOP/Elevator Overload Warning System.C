#include<stdio.h>
int main(){
    int maxW,n,i=0,w,sum=0,count=0;
    scanf("%d%d",&maxW,&n);
    while(i<n){
        scanf("%d",&w);
        if(sum+w>maxW) break;
        sum+=w;
        count++;
        i++;
    }
    printf("Passengers Allowed: %d\n",count);
    if(i<n) printf("Overload: Yes");
    else printf("Overload: No");
    return 0;
}
