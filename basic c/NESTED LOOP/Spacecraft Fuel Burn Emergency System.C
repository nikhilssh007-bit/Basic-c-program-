#include<stdio.h>
int main(){
    int fuel,n,i=0,burn,stage=-1;
    scanf("%d%d",&fuel,&n);
    while(i<n){
        scanf("%d",&burn);
        fuel-=burn;
        if(fuel<0){
            stage=i+1;
            break;
        }
        i++;
    }
    if(stage==-1){
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0");
    } else {
        printf("Emergency Stage: %d\n",stage);
        printf("Fuel Wasted: %d",-fuel);
    }
    return 0;
}
