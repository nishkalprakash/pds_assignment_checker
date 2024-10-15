#include <stdio.h>
int main()
{
 int n,arr[n],temp,min,m;
 printf("enter no. of elements  in array\n");
 scanf("%d",&n);
 // read the array
 for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
// sorting

min=arr[0];
for (intj=1,j<n;j++)
{
 if (arr[j]< min)
  {temp=arr[j]
   for(int i=j;i<0;i--)
     arr[j]=arr[j-1];
 arr[0]=temp}
 }
//get m to insert
printf("enter the element to insert in the array");
 scanf("%d",&m);
 //insert m in the sorted array
 
for (int i=0;i<n;i++)
    printf("%d, ",arr[i]);
 
return 0;
}