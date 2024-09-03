//aashrith vellampalli
// 24NA10007
#include <stdio.h>
#define N 100
int main(){
int n,arr[N],cnt,k=0;
printf("enter number of elements in array less than 100\n");
scanf("%d",&n);
if(n<=100){ // CONDITION FOR N<100
for(int i=0;i<n;i++)
 {
  printf("enter element %d  ",i);
  scanf("%d",&arr[i]); //TAKING INPUT FROM USER
 }
printf("original array: ");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);}
printf("\n");
printf("duplicates:\n");
for(int i=0;i<n;i++)
{
cnt=1;

 for(int j=i+1;j<n;j++)
  {
   if(arr[i]==arr[j])
   {
    cnt++;
    arr[j]=-999999+k;
    k++;  
   
   } 
   } 
   if(cnt>1)
   printf("%d(%d)\n",arr[i],cnt);
  
  }

 printf("unique array\n");
 for(int i=0;i<n;i++)
 {
  if(arr[i]>-1){
   printf("%d ",arr[i]);}
 }
 }
 
 else
 {printf("error:n>100");} 
 printf("\n");
 return 0;
 }
 
 
