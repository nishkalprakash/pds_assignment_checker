
   
#include<stdio.h>

int main()
{
  int number,b;
  printf("enter the number");//enter the numbers whose factors need to be find//
  scanf("%d", &number);
  printf("factors of %d are:" , number);
  for(b=1; b <= number; ++b)
  { 
    if (number % b == 0)
     {
       printf("%d\n", b);
     }
    
  }
  for(b=1; b >= number; ++b)
  { 
    if (number % b == 0)
     {
       printf("%d\n", b);
     }
  }
 return 0;
}

