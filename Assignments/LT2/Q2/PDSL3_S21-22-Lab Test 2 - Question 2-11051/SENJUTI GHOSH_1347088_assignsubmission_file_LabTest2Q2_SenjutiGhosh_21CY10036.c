/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
/*size is the number of elements in the list*/
int maxAlphavalue(int S[],int size){
/*count calcultes the alpha value of individual elements and stores it in maxcount which stores the maximum alpha value */
    int count=0,maxcount=0;
    for (int i=0;i<size;i++){
         for(int j=i-1;j>=0;j--){
             if (S[j]%S[i]==0){
                 count++;
             }
         }
         /*maxcount stores count only if the count value is more than the current maximum alpha value*/
         if (count>=maxcount){
             maxcount=count;
         }
         /*count is initialised to 0 again to calculate alpha value of next element*/
         count=0;
    }
    return (maxcount);
}
/*main function*/
int main(){
/*Array size and elements are received as user inputs*/
int S[100];
int n;
printf("Enter size of array\n");
scanf("%d",&n);
printf("Enter array elements\n");
for (int i=0;i<n;i++){
     scanf("%d",&S[i]);
}
/*y stores the maxcount value returned by the function call*/
int y=maxAlphavalue(S,n);
printf("%d\n",y);
return 0;
}
