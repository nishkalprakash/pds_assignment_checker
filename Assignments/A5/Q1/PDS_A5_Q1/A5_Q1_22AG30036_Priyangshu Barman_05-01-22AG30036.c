
#include<stdio.h>
int main()
{
    int n;
    int i;

    printf("Enter the array size : \n");
    scanf("%d",&n);
    int num[n];
    if(n >= 100)
    {
        printf("Array Size must less than equal to 100.");
    }
    else
    {
    printf("The numbers are : ",n);
    for(i = 0;i < n;i++)
{
scanf("%d",&num[i]);
}
  printf("Original Array : ");
   for(i = 0;i < n;i++)
   {
       printf("%d ",num[i]);
   }
   printf("\n");
   int j = 0;
   for(i = 0;i < n;i++)
   {
       if(num[i] < 0)
       {
           if(i != j)
           {
               int t = num[i];
               num[i] = num[j];
               num[j] = t;
           }
           j++;
       }
   }
   printf("Rearranged Array : ");
   for(i = 0;i < n;i++)
   {
       printf("%d ",num[i]);
   }
    }
    return 0;
}
