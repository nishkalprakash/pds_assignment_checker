
/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 7
* Description : To find perfect numbers
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int n,*a;
    int arg,b[100];
    scanf("%d",&n);

    time_t t;

    a=(int*)malloc(n*sizeof(int));

    srand(time(0));

    for(int i=0;i<n;i++){
        int p=2 + rand()%1000;
        a[i]=p;
    }

    printf("\n");

    printf("%d random number array: ",n);

    for(int i=0;i<n;i++){

        printf("%d ",a[i]);
    }

    printf("\n");

    if(n==0){
        printf("No perfect number found");
    }
    else{
        for(int i=0;i<n;i++){
            int t=a[i],sum=0;

             int j=1;
             while(j<t){
                 if(t%j==0){
                    sum=sum+j;
             }
             j++;
             }

            if(sum==t){

                 b[arg]=t;
                arg++;
            }

        }

        printf("\n");

        if(arg==0){
            printf("No perfect number found");
        }
        else{

        int i=0;
        while(i<arg){
            printf("%d ",b[i]);
            i++;

            }
               printf("is/are perfect number(s)");
        }
        }

    printf("\n");


   return 0;
}
