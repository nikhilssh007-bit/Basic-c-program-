#include<stdio.h>
int main(){
    int n,i=0,hrs,total=0,burn=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&hrs);
        total+=hrs;
        if(hrs>4) burn++;
        i++;
    }
    printf("Total Overtime: %d\n",total);
    printf("Burnout Days: %d",burn);
    return 0;
}
