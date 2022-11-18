/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 2a
*/
#include<stdio.h>

//This function takes array and  2 indices and calculate sum of elements between those indices.
int subsum(int a[],int i,int j){
    int k,sum=0;
    for(k=i;k<=j;k++){
        sum=sum+a[k];
    }
    return sum;
}
//this function takes array and no. of elements in it and returns maximum sum of continuous sub-arrays
int larsubsum(int a[],int n){
    int i,j,maxsum=-10000,temp;//maxsum is assigned a large negative value such that any sum is greater than -10000. the concept is to assign a number which is lower most
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            temp=subsum(a,i,j);
            if(temp>maxsum){
                maxsum=temp;
            }
        }
    }
    return maxsum;
}
int main(){
    int n,i,j,k,temp1;
    int max;
    printf("Enter n(1-20): ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=larsubsum(a,n);//max is maximum sum required
    printf("\nLargest sum = %d",max);
    printf("\nSub-arrays = ");
    //these loops shown down are to print sub-arrays which have sum as max
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            temp1=subsum(a,i,j);
            if(temp1==max){
                for(k=i;k<=j;k++){
                    printf("%d ",a[k]);
                }
                printf("OR ");
            }
        }
    }
    /*at last a reduntant OR will be printed , please ignore that*/
 return 0;
}
