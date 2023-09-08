#include <stdio.h>
#include<stdlib.h>

int main(){

    int i, r, x;
    int sum=0;
    int max=0;
    int min=0;
    int low =5000;
    int high=6000;
    printf("Random numbers are:\n");
    for(i =0; i<20;i++){

    r = rand()%(high-low+1)+low;
    printf("%d\n",r);
    for (int j =0;j<4;j++){
        x=r%10;
        sum = sum+x;
        r=r/10;

    }
    }


    return 0;
}
