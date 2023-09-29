#include<stdio.h>
#include<limits.h>
int main()
{
  int largest=INT_MIN,secondsmallest=INT_MIN;
  int smallest=INT_MAX,secondlargest=INT_MAX;
  int num;
  printf("ENTER THE NUMBERS");
  while(1)
     {
       printf("Enter the numbers");
       scanf("%d",&num);
     }
  if(num<0)
    {(printf("Entered wrong valuues");
   if(num > largest)
     {
       secondlargest = largest;
       largest = num;
     }
  else if (num > secondlargest && num != largest)
    {
      secondlargest = num;
	}
  else if(num > smallest)
    {
      secondsmallest = smallest;
      smallest = num;
    }
  else if(num > secondsmallest && num != smallest)
    {
      secondsmallest = num;
    }
   
   if(secondlargest = INT_MIN || secondsmallest = INT_MAX)
     {
       printf("second largest and secondsmallest numbers are not entered yet");
     }
   else if{
     printf("Largest number is %d/n : largest");
    printf("Second Largest number is %d/n :secondlargest");	 
     printf("Smallest number is %d/n : smallest"); 
     printf("Secondsmallest number is %d/n : secondsmallest");
   }
   return 0;
}
    
