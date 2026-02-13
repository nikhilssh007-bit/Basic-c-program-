#include<stdio.h>
int main(){
    int n,i=0,power,max=0,surge=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&power);
        if(power>max) max=power;
        if(power>5) surge++;
        i++;
    }
    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",surge);
    return 0;
}
