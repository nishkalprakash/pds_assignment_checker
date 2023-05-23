#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 7
Description: Generate n numbers and store them in array
*/
time_t t;

int main(){
    int n, rn, i=0, sum=0;
    printf ("Enter value of n: ");
    scanf("%d",&n);

    int *array;
    array [0]= (int *)malloc(n*sizeof(int));
    srand(time(0));

    while(i<n){
        rn = 2+ rand()%1000;
        *(array+i)=rn;
        i++;
    }
    printf("%d-random number array: ",n );
    i=0;

    while(i<n){

        printf("%d ",*(array+i));
        i++;
    }
    for(i=0;i<= *(array+i);i++){
        for(int j=2;j<= *(array+i);j++){
            if(*(array+i)%j==0)
                sum+=j;
            if(*(array+i)%j!=0)
                continue;
        }
        if(sum==*(array+i))
            printf("\n%d is a perfect number: ",*(array+i));
    }


    return 0;
}
