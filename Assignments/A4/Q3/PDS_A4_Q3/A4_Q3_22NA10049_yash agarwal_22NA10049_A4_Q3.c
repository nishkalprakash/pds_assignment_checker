/*
* Section 2
* Roll No : 22NA10049
* Name : Yash Agarwal
* Assignment No : 4
* Description : program to print the pseudo triangle pattern
*/

#include <stdio.h>

int main()
{
   int n,j,z,f=0;                                                           // variables used
   printf("Enter the number of rows :");
   scanf("%d/n",&n);                                                        // taking n as input i.e. number of lines

   for(int i=1;i<=n;i++)                                                     // the outher loo which takes care of the number of lines
   {
       for( j=1;j<=n-i;j++)                                                  // the loop which prits the space before the characters
       {
           printf(" ");                                                       // printing spaces before the character
       }
          f=i;
       for( z=1;z<= 2*i-1;z++)                                                // the loop which prints the characters till 2*i-1
            {
                printf("%d",f%10);                                              // printing the remainder of f as each pattern character

               if(z<i)                                                         // if the cursor is before mid of line value increases
                f++;

                if(z>=i)                                                     // if the cursor is beyond  mid of line value decreases
                   f--;

            }

        printf("\n");                                                       // to change the line
   }

}
