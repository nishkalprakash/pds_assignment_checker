
#include<stdio.h>
int main()
{
int A[5];
int m,k;
int t;
int i,c,split;
printf("enter numbers in ascending order, press 'x' to stop.\n");
for(i=0,c=1;c<=5;i++){                          //fills the initial array
    scanf("%d",&A[i]);
    c++;
    }

printf("enter number to be added");
scanf("%d",&m);

for(i=0,k=0;i<5&&k<1;i++){
    if(A[i]>m&&k<1){                            //will split original array into two parts 
      k++;
    }
 split=i;
   
}

int L[split];                                 //splits array to add the input in between
int R[6-split];
printf("output array: ");
for(i=0;i<split;i++){
    L[i]=A[i];}
L[split]=m;
for(i=0;i<=split;i++){
    printf("%d ",L[i]);}

for(i=split,t=0;i<100&&t<6-split;i++,t++){
    R[t]=A[i];}
for(i=0;i<5-split;i++){
    printf("%d ",R[i]);}

return 0;
}
