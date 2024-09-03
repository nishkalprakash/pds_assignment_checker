// aashrith vellampalli
// 24NA10007
#include <stdio.h>
#define N 100
int main(){
int n,arr[N],temp;
printf("enter number of elements in array less than 100\n");
scanf("%d",&n);
if(n<=100){ // CONDITION FOR N<100
for(int i=0;i<n;i++)
 {
  printf("enter element %d  ",i);
  scanf("%d",&arr[i]); //TAKING INPUT FROM USER
 }

printf("the original array is:");
for(int i=0;i<n;i++)
printf("%d ",arr[i]); //PRINTING ORIGINAL ARRAY

for(int i=n;i>=0;i--)
{
 for(int j=n;j>=0;j--)
 {
  if(arr[j]<0&&arr[i]>0) 
  {
   temp=arr[i];
   arr[i]=arr[j]; // SWAPPING THE NEGATIVE AND POSITIVE INTEGER
   arr[j]=temp;
   break;
  } 
 }

}

printf("\nthe rearranged array is: ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}

else
printf("error:n>100\n");
}




