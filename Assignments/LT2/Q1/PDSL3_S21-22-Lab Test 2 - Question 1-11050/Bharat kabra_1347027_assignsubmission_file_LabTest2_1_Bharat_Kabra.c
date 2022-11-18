/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 2
*/
#include <stdio.h>
#include <limits.h>

int main()
{   
//taking the number of elements 
   int n;
   printf("Enter number of elements:");
   scanf("%d", &n);
//inputting the list
    int arr[n];
   printf("Enter the elements:");

   for(int i=0; i<n; i++)
     scanf("%d", &arr[i]);

   int max_sum = INT_MIN, curr_sum =0;

   for(int i=0; i<n; i++){
       //taking sum of each elements 
      curr_sum += arr[i];
        //if max_sum 
      if(max_sum < curr_sum)
        max_sum = curr_sum;

      if(curr_sum < 0)
        curr_sum = 0;
    

}
// printf("Sub-arrays = %s",curr_sum);

   printf("Largest sum = %d ", max_sum);

   return 0;
}