//Roll no.: 23ME30058
//Name: Shravani Khot

#include<stdio.h>
#include<math.h>

int main()
{
  int deposit ;
 
  printf("Enter the deposit amount \n");
  scanf ("%d" , &deposit);
  int time_period ;
  
  printf("Enter the time period of deposit in years \n");
    scanf("%d", &time_period);

    printf("The amount payable at the end of the term at the interest rate of 8 percent is  %d \n", deposit + (8 * deposit * time_period/100) );

}

    
  
    
