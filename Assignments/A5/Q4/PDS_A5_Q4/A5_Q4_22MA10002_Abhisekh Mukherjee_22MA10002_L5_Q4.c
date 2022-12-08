/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:5
question:4                            */
#include<stdio.h>
int main()
{
int n,a ,bins,r ;
printf("the size of array\n");
scanf("%d",&n); // size of array
printf("the size of bins\n");
scanf("%d",&bins); // input the bins
int A[n];

for(int i=0;i<n;i++){
scanf("%d",&A[i]);
}
int max=A[0];
int min=A[0];
for(int i=0;i<n;i++){
if (max<A[i]){
max=A[i];    // if else and loop
}
}
for(int j=0;j<n;j++){
if (min>A[j]){    // loop
max=A[j];
}
}
r=(max-min+1)/ bins;

 for(int i=0;i<n;i++){
for(int j=0;j<=bins;j++){

if((A[i]<=min+(j+1)*r/bins -1 )&& (A[i]>=min+j*r/bins)) {
printf("Bin %d",j+1);
printf(" %d\t",A[i]);
}
}
printf("\n");
}
return 0;
}





