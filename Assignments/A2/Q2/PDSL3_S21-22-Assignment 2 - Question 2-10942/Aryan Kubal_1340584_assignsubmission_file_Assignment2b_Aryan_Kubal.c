/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{int n,k,p; // declaring variables
int D=0;
float De; // It stores the value of final distance
printf("Enter the value of n: \n"); // taking the value of n from user
scanf("%d",&n);
printf("Enter the value of k: \n"); // taking the value of k from user
scanf("%d",&k);
for(int j=0;j<k;j++) // loop iteration for k times
{int sum=0; // initialize sum of distance as 0
for(int i=0;i<n;i++) // Loop iteration for n times
{
p=rand()&1? -1: 1; // intializing random value in p
sum=sum+p; // update sum 
}
D=D+sum*sum; // add square of sums to total distance
}
De=sqrt(D/k); // calculation of equivalent distance
printf("Final distance is :%f ",De);
return 0;}