//lab5 assingment 3
#include <stdio.h>
#define N 100 
int main()
{
 int arr1[100],n,i=0,k,temp1;
 scanf("%d",&n);// enter the size of array 
 if (n<=N){//conditional for array size
 for(i;i<n;i++)//looping for array scanning 
 {
  scanf("%d",&arr1[i]);
  if (arr1[i]!=1||arr1[i]!=0){
  printf("Not Valid char:");
  break;}
 } 
 printf("HAYSTACK:");//looping for array printing
 for(int i=0;i<n;i++)
 {
 printf("%d\t",arr1[i]);
 }
 /*for(int i=0;i<n;i++)//looping for array rearranging 
 {
 for(int k=0;k<n;k++)
 {
  if(arr1[k]>0&&arr1[i]<0)//for retaining and swapping case if necessary
  {
  temp1=arr1[i];
  arr1[i]=arr1[k];
  arr1[k]=temp1;
  break;
 }
 }
 }
 printf("rearranged Array:");//looping for array printing
 for(int i=0;i<n;i++)
 {
 printf("%d\t",arr1[i]);
 }*/
 }
else {//conditional for out of bound array
  printf("Error:n>100");}
return(0);
}

