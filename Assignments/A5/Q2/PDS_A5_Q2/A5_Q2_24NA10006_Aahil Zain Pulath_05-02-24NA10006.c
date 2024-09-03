//lab5 assingment 2
#include <stdio.h>
#define N 100 
int main()
{
 int arr1[100],n,i=0,k,count1;
 scanf("%d",&n);// enter the size of array 
 if (n<=N){//conditional for array size
 for(i;i<n;i++)//looping for array scanning 
 {
  scanf("%d",&arr1[i]);
 } 
 printf("Original Array:");//looping for array printing
 for(int i=0;i<n;i++)
 {
 printf("%d\t",arr1[i]);
 }
 //now a loop for counting duplicates
 printf("Duplicates:");
 for(int i=0;i<n;i++)
 {
 count1=1;
  for(int k=i+1;k<n;k++)
  {if (arr1[i]==arr1[k]){
  count1=count1+1;
  }
  }
  if (count1>1){
  printf("%d(%d),\n",arr1[i],count1);
  }
  }
 }
else {//conditional for out of bound array
 printf("Error:n>100");}
return(0);
}
 
