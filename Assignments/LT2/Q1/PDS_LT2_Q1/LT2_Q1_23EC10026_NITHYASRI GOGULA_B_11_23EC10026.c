// Roll NO.:<23EC10026>
// NAME:<GOGULA NITHYASRI>
// SET [B]

#include<stdio.h>
int main()
{
 int arr[50];
 int i=50;
 int arr_ran_numbers[20100];
 int n[20100];
 for(i=0;i<50;i++)
 printf("Fill the arr with random numbers in the range of[20100]\n");
 scanf("\n random numbers",&i);
 //maxMin
 printf("Enter the minimum value stored in the array\n");
 scanf("\n minimum",&i); 
 printf("Enter the maximum value stored in the array\n");
 scanf("\n maximum",&i);
 //duplicate
 printf("Enter all the numbers that occur more then once in the array\n ");
 //highestFreq
 printf("Enter the number that occurs with highest frequency\n");
 scanf("\n highest frequency",&i);//in the random numbers 
 printf("The number of occurrence\n");
 //largestincreasing
 printf("The largest increasing sequence of number occurring in the array\n");
 scanf("\n largest increasing sequence of number",&i);// in the random numbers
 //largestdecreasing
 printf("The largest sequence decreasing number occurring in the array\n");
 scanf("\n largest sequence decreasing number",&i);//in the random numbers
 //removeDuplicate
 printf("remove the duplicate entries and display the array\n");
return 0;
}
