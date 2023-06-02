#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n;
    int arr[100];
    int i;
    printf("enter n \n");
    scanf("%d",&n);

     arr[0]=0;
     arr[1]=1;
     if(n<0)
        printf("enter positive number");

     for(i=2;i<=100;i++);
     {
        arr[i]=arr[i-1]+arr[i-2];
     }

 if(n>0)
     {
         for(i=0;i<=100;i++)
       {
         if(arr[i]==n)
         {
            printf("%d is a fibonacci number  \n",n);

         }

        /* if(arr[i]>n)
         {
             printf("%d \n",n);
             break;
         }



         if((arr[i]-n) >=(n-arr[i-1]))
         {
           printf("nearest fib number is %d \n",arr[i-1]);

         }
         if((arr[i]-n) <(n-arr[i-1]))
        {
         printf("nearest fib number is %d \n",arr[i]);
        }*/

       }


     }


    return 0;

}
