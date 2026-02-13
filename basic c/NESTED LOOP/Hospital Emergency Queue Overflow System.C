#include<stdio.h>
int main(){
    int cap,n,i=0,arr,treated=0,reject=0;
    scanf("%d%d",&cap,&n);
    while(i<n){
        scanf("%d",&arr);
        if(treated+arr<=cap){
            treated+=arr;
        } else {
            reject += (treated+arr-cap);
            treated = cap;
        }
        i++;
    }
    printf("Treated Patients: %d\n",treated);
    printf("Rejected Patients: %d",reject);
    return 0;
}
