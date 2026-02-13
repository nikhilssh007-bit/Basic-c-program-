#include<stdio.h>
int main(){
    int cap,n,i=0,change,occ=0,critical=0,limit;
    scanf("%d%d",&cap,&n);
    limit = (cap*90)/100;
    while(i<n){
        scanf("%d",&change);
        occ+=change;
        if(occ>limit) critical++;
        i++;
    }
    printf("Final Occupied Beds: %d\n",occ);
    printf("Critical Hours: %d",critical);
    return 0;
}
