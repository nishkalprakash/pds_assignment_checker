//code to insert and  print an array in sorted order
//Name:-Dipon Sarkar
//Roll No.:- 24NA10025


#include<stdio.h>
int sort(int a[],int n)
{
int t,j,i,k;
for (i=0;i<=n;i++) // condition check whether i is less than n or not
{
 for(j=0;j<=n;j++) // condition check whether j is less than or equal to n
 {
  if(a[j]>a[j+1]) // condition  for swapping a[j] and a[j+1] 
  {
   t=a[j]; //using an extra variable t to swap a[j] and a[j+1]  and storing a[j] in t
   a[j]=a[j+1]; // storing a[j+1] in a[j]
   a[j+1]=t; //storing t in a[j+1]
   }
  }
 }
}
int main()
{
 int n,m,a[101],i,max,t; // declararing variables in main function
 max=a[0];
 printf("Enter n"); // enter n
 scanf("%d",&n);
 printf( "Enter A[n]"); // enter A[n]
 for (i=0;i<=n;i++)
 {
  scanf("%d",&a[i]); //taking input of a[i] from user
  }
  printf("Enter m");
  scanf("%d",&m);
  
  for (i=0;i<n;i++)
   {
    if (a[i]>m) // checking whether a[i] is greater than m or not
    {
     max=a[i]; 
     }
   }
  sort(a,n); // function declaration
  a[n+1]=m;
   for (i=0;i<n;i++)
   {
    if (m<a[i]) // condition for swapping
   {
  //swapping a[i] and m with help of an extra variable t
  t=a[i]; //storing a[i] in t
  a[i]=m; //storing m in a[i]
  m=t;  // storing t in m
  }
  }
  
  
  
  
  printf("Output Array:"); // printing the output array after sorting the array in order
  for (i=0;i<=n;i++)
  {
   printf("%d",a[i]);
   }
   
    return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
