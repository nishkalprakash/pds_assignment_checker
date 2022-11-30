/*section 14
roll no. - 22GG10024
name - KRISHNA GUPTA
assignment - 4
description - Printing pattern*/
#include <stdio.h>
int main()
{
   int n , row,col ;
  printf("Enter a number ");   // inputing a number from user
  scanf("%d",&n);
  if (n>=2 && n<=10)          // checking range
{
     for (row =1; row<=n ;row ++)  // loop for row
    { 
       for (col = 1; col<=row;col++)  // loop for column
        {
          if (col%2==0)             // printing 0 for even columns
          {
               printf("0");

              }
             else {
                      printf("1");     // printing 1 for odd columns
                       }
                    }
              printf("\n");
                 }
 }
  else
{  
printf("Enter a number between 2 and 10");
} 
return 0;
}
