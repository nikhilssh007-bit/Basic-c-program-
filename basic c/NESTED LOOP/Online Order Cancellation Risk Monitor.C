#include<stdio.h>
int main(){
    int n,i=0,val,success=0,cancel=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&val);
        if(val==1) success++;
        else cancel++;
        i++;
    }
    printf("Successful: %d\n",success);
    printf("Cancelled: %d\n",cancel);
    if(cancel>success)
        printf("Status: Risk");
    else
        printf("Status: Safe");
    return 0;
}
