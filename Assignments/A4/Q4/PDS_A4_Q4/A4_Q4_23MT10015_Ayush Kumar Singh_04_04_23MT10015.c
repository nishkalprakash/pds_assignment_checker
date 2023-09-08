#include <stdio.h>
#include <math.h>

int main(){
    int n;
    for(int i=0; i<10000;i++){
        printf("Enter a single digit non negative number :");
        scanf("%d", &n);
        if(n==5){
            break;
        }
    }for(int i=0; i<10000;i++){
        printf("Enter a single digit non negative number :");
        scanf("%d", &n);
        if(n==1){
            break;
        }
    }for(int i=0; i<10000;i++){
        printf("Enter a single digit non negative number :");
        scanf("%d", &n);
        if(n==7){
            break;
        }
    }printf("Pattern found");

    return 0;
}

