#include<stdio.h>
#include<math.h>

int countDigits(int n){
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

int main(){
    int n,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    int digits = countDigits(n);

    while(temp>0){
        int rem = temp%10;
        sum += pow(rem,digits);
        temp/=10;
    }

    if(sum==n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
