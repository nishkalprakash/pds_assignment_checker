/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 7*/
#include<stdio.h>

int main()
{
    int n,i,j,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
   int a[n];

 
printf("Enter the elements :\n");

  for(i=0;i<n;i++)
     { 
       scanf("%d\n",&n);
      }
   
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
   { 
     if(a[j]>=a[i])
    { 
      break;
     } 
   else
   {  count++;}
   }
}
printf("out of order : %d\n",count);
 return 0;
}

