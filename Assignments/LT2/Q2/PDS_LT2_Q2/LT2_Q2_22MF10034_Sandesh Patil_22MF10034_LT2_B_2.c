/*name - sandesh patil
roll no- 22mf10034
sec 2
set b
que - 2*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int max(int *a,int n);

int main()
{
    int n,p,q,r;

    printf("enter value of n:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("invalid value of n");
        return 0;
    }
    int *arr = (int *)malloc(sizeof(int) * n);
    printf("enter value of p:");
    scanf("%d",&p);
    printf("enter value of q:");
    scanf("%d",&q);
    if(p>q)
    {
        printf("p should be less than or equal to q");
        return 0;
    }
    printf("%d-random number array:\n",n);
    for (int i = 0; i < n; i++)
     {
      int r = p + rand() % q; // generate random number
       printf("%d ", r);
       arr[i] = r; // Initialize to the dynamic array
     }
     max(arr,n);



return 0;

}

int max(int *a,int n)
{
    int maximum;
    maximum=&a[0];
   for (int i=1; i<n; i++)
   {
     if (a[i] > maximum)
     maximum = a[i];
   }
   printf ("\n max is %d", (maximum));

}





















