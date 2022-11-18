/*
Name : Ankit Yaadav
Roll No  : 21EE30005
Department : Electical Engineering
Package : Codeblocks
Lab Test : 2
*/


#include<stdio.h>

int main(){
int a[20],i,j,k,n,m,sum;

printf("Enter the size of array\n");
scanf("%d",&n);

printf("Enter the array\n");

for(i=0;i<n;i++){

    scanf("%d",&a[i]);                              //Entering the Array

}

m=a[0];

for(i=0;i<n;i++){

    sum=0;
                                                   //finding the maximum
    for(j=i;j<n;j++){

        sum=sum+a[j];

        if(sum>m){
            m=sum;
        }
    }}

    printf("The Largest sum is %d",m);

    printf("The subarrays are :");

    for(i=0;i<n;i++){

    sum=0;

    for(j=i;j<n;j++){
                                                       //printing the subarrays
        sum=sum+a[j];

        if(sum==m){
            for(k=i;k<=j;k++){

                printf("%d",&a[k]);
            }
        }
    }}

return 0;}
