/*Name-Arihant Garg
  Roll no-24NA10017
  Lab no-05        
  Title-Program to rearrange negative and postive values in an array*/


#include <stdio.h>
#include <string.h>

#define N 100


int main(){

int array[N];

int n,i,temp,j;

printf("Enter the number of elements of Array\n");                            //scanning the value of n

scanf("%d",&n);

if(n>100) printf("Error:n>100\n");                                              //check for n>100

else{

printf("Input %d numbers\n",n);                                                  

for(i=0;i<n;i++){

scanf("%d",&array[i]);                                                        //scanning the values of the array

}
printf("Original Arrays:\n");

for(i=0;i<n;i++){

printf("\t%d",array[i]);                                                     //printing the values of the array
}

for(i=0;i<n;i++){

for(j=0;j<=i;j++){

if(array[i]<0){                                                             //rearranging the array

if(array[i-1]>0){

for(i=n-1;i>=0;i--){

temp=array[i-1]; array[i-1]=array[i]; array[i]=temp;
}
}
else break;
}
}}}

printf("\nRearranged Arrays:\n");                                           //printing the rearranged array

for(i=0;i<n;i++){

printf("\t%d",array[i]); 



}
return 0;
}
