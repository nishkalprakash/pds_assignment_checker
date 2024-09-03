/*Name-Arihant Garg
  Roll no-24NA10017
  Lab no-05        
  Title-Program to remove duplicate entries in an array*/


#include <stdio.h>
#include <string.h>
#define N 100

int main(){

int n,i,j,k;

int duplicates;

printf("Input the amount of numbers\n");         

scanf("%d",&n);                                                //inputting the value of n

int Array[n];

printf("Enter %d numbers\n",n);                                //check for n>100

if(n>100) printf("error n>100");

else{

for(i=0; i<n; i++){                                           //loop for scaning the numbers and storing them in an array



scanf("%d",&Array[i]);

}
printf("Orginal array:\t");

for(i=0;i<n;i++){

printf("%d\t",Array[i]);
}


for(i=0;i<n;i++){                                             //loop for scanning duplicates

for(j=-1,k=0;j<i;j++){

if(Array[i]=Array[j+1]){

Array[i]=duplicates;

Array[j+2]==Array[j+1];                                      //removing the place of j+1th element

printf("Duplicates:%d",duplicates);

}
}
}


}

return 0;
}
