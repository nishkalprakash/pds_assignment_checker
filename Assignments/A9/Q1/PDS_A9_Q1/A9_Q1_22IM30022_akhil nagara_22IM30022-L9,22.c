#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N

int main()
{
    int arr[];
    int n,i,j,temp;
    printf("Enter the real value number (<=%d)",N);
    scanf("%d",&n);
    if (n>N)
       {
          printf("Error: The real value exceeds the limit (%d).\n",N);
    return 1;
       }
       printf("Enter %d the real value number:\n",n);
       for(i=0; i<n;i++)
       {
           scanf("%d",&arr[i]);
       }
       i=0;
       j=n-1;
       while(i<=j)
       {
           if(arr[i]<0)
           {
               i++;
           }
           else if (arr[j>=0])
           {
               j--;
           }
           else {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--

           }
       }
       printf("The real value number is:\n");
       for(i=0;i<n;i++)
       {
           printf("%d",arr[j]);
       }
       return 0;
}
