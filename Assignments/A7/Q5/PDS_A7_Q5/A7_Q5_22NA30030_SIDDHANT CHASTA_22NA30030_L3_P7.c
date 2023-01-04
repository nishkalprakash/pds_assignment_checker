/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 7
Description :A program to find out how many elements are "Out of order".
*/

#include<stdio.h>

int outOfOrder(int arr[],int  n);
void printArr(int arr[],int n);


    int main()
{
    int arr[10],n;
    printf("enter the size 'n' of the array : ");  // size of array is n 
    scanf("%d",&n);
    printArr(arr,n);
    printf("Out of Order : %d",outOfOrder(arr,n));

}


         int outOfOrder(int arr[],int n)
     {
         for (int trial = 0; trial < n-1 ; trial++)
            {
                for (int  j = 0; j < n-1-trial; j++)
                {
                      if ( arr[ j ] < arr[ j +1] || arr[j] == arr[j+1] )
                     {      
                            int count=0;
                            return count;
                     }
                     else 
                     
                  {
                       int count=0;
                       count = n-j;
                       return count;
                     
                  }
                }
            }
       
      }
   

    

          void printArr(int arr[],int n)  // Function for taking input array
       {
             for(int k=0;k<n;k++)
            {
                scanf("%d",&arr[k]);
            }
       }

























