#include <stdio.h>
int main(){
    int data, N, use, days=0;
    scanf("%d%d",&data,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&use);
        if(data - use >= 0){
            data -= use;
            days++;
        }
    }
    printf("Remaining Data: %d\n", data);
    printf("Successful Days: %d", days);
}
