#include <stdio.h>
int main()
{
    int num[25];
    int n;
    int a,i,x,t;
    int first, last, middle;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted order");
    for (i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    while((a=1)&& i<n)
    {
    if(num[i]>num[i+1])
    a=0;
    i++;
  }

  if(a=1)
  {
    printf("The array is sorted\n");
    printf("Enter the key element x, which you want to search:\n ");
    scanf("%d",&x);
    printf("Choose the algorithm: 1 for linear search and 2 for binary search\n");
    scanf("%d",&t);
    if(t==1)
    {
        printf("Executing the linear search algorithm\n");
        printf("Successful search\n");
    }
    else if(t==2)
    {
        printf("Executing the binary search algorithm\n");
         first=0;
         last=n-1;
        middle=(first+last)/2;
        while(first<=last)
        {
          if (num[middle]<x)
         {
             first=middle+1;
         }
         else if(num[middle]==x)
            {
         printf("%d is present at index %d.\n",x, middle+1);
         break;
        }
      }
      }
      else
        {

        last=middle-1;
         middle=(first+last)/2;
        }

   if(first>last)
     {

      printf("Not found! %d is not present in the list.\n",x);
        printf("Successful search\n");
     }
  }

else
  {
      printf("The array is not sorted.\n");
  }

  return 0;
}
