/*
* Section 2
* Roll No.: 22PH10040
* Name: Sagarneel Ghoshal
* Assignment 7
* Description: Perfect number checker
*/


#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int n,i,j,b[100],arg=0;
    printf("Enter no. of numbers: ");
    scanf("%d",&n);


    int *p;
    p=(int*)malloc(n*sizeof(int));

    srand(time(0));


    for(i=0;i<n;i++){
            int a=2+rand()%1000;
            p[i]=a;

    }
    printf("\n");

    printf("%d random number array: ",n);

    for(i=0;i<n;i++){
        printf("%d ",p[i]);

    }

    printf("\n");


    if(n==0){printf("No perfect number found");}

    else{
        for(i=0;i<n;i++){
            int temp=p[i];
            int sum=0;
            for(j=1;j<temp;j++){
                if(temp%j==0) sum+=j;
            }
            if(sum==temp){
                b[arg]=temp;
                arg++;
            }
        }


    printf("\n");

    if(arg==0) printf("No perfect number found");

    else{

        for(i=0;i<arg;i++){
                printf("%d ",b[i]);
      }
        if(arg==1) printf("is a perfect number.");
        else printf("are perfect numbers.");

    }



}

return 0;
}




