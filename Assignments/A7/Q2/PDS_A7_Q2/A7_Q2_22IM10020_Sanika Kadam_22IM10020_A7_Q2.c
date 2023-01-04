//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 2


#include<stdio.h>
#define MAX_SIZE 100

int main()
{
   int Arr[MAX_SIZE],Freq[MAX_SIZE];
   int size,count=0,i,j,num;

   printf("Enter the size of array: ");
   scanf("%d",&size);

   printf("Enter the elements of array: ");
   for(int i=0;i<size;i++)
   {
     scanf("%d",&Arr[i]);
   }
   

   for(i=0;i<size;i++)
   {
     count=1;
     if(Arr[i] != -1)
     {
       for(j=i+1;j<size;j++)
       {
         if(Arr[i] == Arr[j])
         {
           count++;
           Arr[j]=-1;
         }
       }
       Freq[i]==count;
     }
   }

   printf("Enter the number: ");
   scanf("%d",&num);

   printf("Numbers that appears %d times: ",num);
   for(i=0;i<size;i++)
   {
     if((Arr[i] != -1) && (Freq[i]==num))
     {
       printf("%d ",Arr[i]);
     }
   }
   
   return 0;
}


    

