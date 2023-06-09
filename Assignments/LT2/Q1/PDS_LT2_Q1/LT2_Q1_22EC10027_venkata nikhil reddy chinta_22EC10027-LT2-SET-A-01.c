/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : labtest 2.
* Description :    reccursive code for mean.
*question : 1
*/
#include<stdio.h>
#include<stdlib.h>
float mean(int *a, int n)

{  if(n==1)
    {
        return a[0];
    }

 /*  int *a1,*a2,i,k,l;
  k=n/2;
    l=n-k;
    a=(int*)malloc(n*(sizeof(int)));
      a1=(int*)malloc(k*(sizeof(int)));
       a2=(int*)malloc(l*(sizeof(int)));
    if(n==1)
    {
        return a[0];
    }
   for(i=0;i<k;i++)
    {
        a1[i]=a[i];

    }
    for(i=0;i<l;i++)
    {
        a2[i]=a[k+i];
    }
   return (mean(a1, k)+mean(a2, l))/2;*/
    return a[n-1]+mean(a,n-1);
}
int main()
{
    int n,*p,i;
    float Mean;
    printf("\nenter the number of integers : ");
    scanf("%d" , &n);
    p=(int*)malloc(n*(sizeof(int)));
      printf("\nEnter the elements : ");
     for(i=0;i<n;i++)
    {
        scanf("%d" , &p[i]);
    }
     printf("\nList = [");
    for(i=0;i<n;i++)
    {
        printf("%d " , p[i]);
    }
    printf("]");

 Mean = (mean(p , n))/n;
    printf("\nMean=%.2f" , Mean);


return 0;
}
