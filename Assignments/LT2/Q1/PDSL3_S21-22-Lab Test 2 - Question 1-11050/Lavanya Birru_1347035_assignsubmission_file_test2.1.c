/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{ int i,j,k,n,m,max_sum=0,sum=0,a[20];
printf("enter n"); //input for size of array
scanf("%d",&n);
printf("enter the elements");
for ( i = 0; i < n; i++)
{
  scanf("%d",&a[i]);  /* input of elements */
}

for ( i = 0; i < n; i++) // to find largest sum
{
  for (j = 0; j <=i; j++)
  {
     sum=sum+a[j];
     if (sum>max_sum)
     {
        max_sum=sum;
        k=j;
        m=i;

     }

  }
    }
  printf("largest sum is %d", max_sum); //printing largest sum
  printf("subarrays are :");
  for ( n = (k-m); n <= k; n++)
  {
     printf("%d ", a[n]); /* printing the sub array */
  }

return(0);
}
