#include <stdio.h>
int main() {
    //Your Code goes here!
    for(int i = 1; i <=5 ; i++){
        for(int j = 5; j >i-1; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
