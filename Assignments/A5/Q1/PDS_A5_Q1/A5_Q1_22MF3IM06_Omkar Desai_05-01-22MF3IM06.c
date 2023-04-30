/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-1
description- arrangements of negative and positive numbers    */

#include<stdio.h>
#include<math.h>
#define N 100;
int main(){

    int n;
    int arr[100];




    printf("Enter the limit \n");
    scanf("%d",&n);
    if(n>100){
        printf("invalid entry\n");


    }

    if(n<=100){



        printf("Enter the input\n");

        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);




        }

    printf("the elemens in the arrays are \n");

    for(int i=0;i<n;i++){

        printf("%d  ",arr[i]);
    }

















    }
return 0;
}
