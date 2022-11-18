//21BT30006
//GUNNU HEMANTH
//SEC 3

#include<stdio.h>
int main()
{
int i,arr[n],m,n;
printf("enter the value of n\n");
scanf("%d",&n);
printf("input the values of array\n");
  for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("the array input by the use is :\n");//compiler prints the array elements.
   for(i=0;i<n;i++)
   {
       printf("%d",arr[i]);
   }
   printf("enter the number of bins \n");
   scanf("%d",&m);
   printf("bins : %d",m);//prints the number of bins
   int max=arr[0];

   for(i=0;i<n;i++)
   {
     if(arr[i]>max)
     {
         max=arr[i];
     }
   }
   int k=max/m;

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           {
              if(arr[i]<k)
           }
       }
   }

return 0;

}
