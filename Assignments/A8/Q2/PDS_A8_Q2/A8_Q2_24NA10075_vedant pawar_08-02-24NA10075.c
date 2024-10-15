#include<stdio.h>
int main()
{
int n;
int m;
printf("Enter the size of array n: ");
scanf("%d",&n);// getting the size of the array as asked in (a)

printf("Enter the value of m :");//taking the vakue of m as asked in (d)
scanf("%d",&m);


int arr[n+1];

for(int i=0;i<n;i++) // we get the array to be taken as asked in (b)
{
  scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)// sorting of the given array
{ 
  for(int j=0;j<n-1;j++ )
{

 if (arr[j] > arr[j+1])
 {
   int temp = arr[j];
   arr[j] = arr[j+1];
   arr[j+1]= temp ;
 }
 

}

}

for(int i=0;i<=n-1;i++)
{ printf(" %d",arr[i]);}//you get the sorted array

for (int i=0;i<=n;i++)
{
 for (int j=0;j<=n-1;j++)
 {
 if (m > arr[j])
 {
int temp = m;
m = arr[j+1];
arr[j+1] = temp ;

 }
 
 }
}
printf("\n");
for (int i=0;i<=n;i++)
{ printf(" %d",arr[i]);}//you get the sorted array with the insertion of m


return 0;}
