//roll no:<23ME30001>
//NAME: <AARYA MAJALI>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,n,digit;
  printf("enter a poitive integer less than 9999");
  scanf("%d",&n);    //reading the integer from the user
  if (n<9999)        //checking if input is valid
    {
      printf("the number is %d",n);
    }
  else
    {
      printf("invalid input number should be less than 9999");
    }
  for (i=0;i<n;i++)
    {
      digit=n/10;
      n=n/10;
    }
  switch(digit)
  {
    case 0:
           printf("1");
        
    case 1: 
           printf("2");
        
    case 2:
           printf("3");
          
    case 3:
           printf("4");
         
    case 4:
           printf("5");
           
    case 5:
           printf("6");
           
    case 6:
           printf("7");
          
    case 8:
           printf("9");
         
    case 9: 
           printf("10");
    break;
  }
  printf("the encoded integer value is %d",n);
  return 0;
}
 
