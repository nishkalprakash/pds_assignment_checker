/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_3
Question    : 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int c,d,n,p ; // variable declarations //
    int i,j,k,l,m ;  // 5 variables to use in for loops  to get all combinations //
    int a1,a2,a3,a4,a5 ; // variables which takes unit's place , Ten's place ....... //
    printf(" Enter c = ");  // input //
    scanf("%d",&c);
    printf(" Enter d = ");
    scanf("%d",&d);

    while(c>9 || d>9)   //While loop to take inputs of c,d from {1,2,3,4,5,6,7,8,9} //
    {
        printf(" Error!!");
        printf("Enter only digits from 1 to 9 \n");

        printf(" Enter c = ");  // input //
        scanf("%d",&c);
        printf(" Enter d = ");
        scanf("%d",&d);

    }
    n = c + d ; // sum of digits //

    for(i=0;i<2;i++)  // i = 0/1 , for example if i = 0 then a1 = c else a1 =d , then for 5 digit no. 5 loops will gives all possible combinations //
    {
      for(j=0;j<2;j++)
      {
          for(k=0;k<2;k++)
          {
              for(l=0;l<2;l++)
              {
                  for(m=0;m<2;m++)
                  {
                     if(i==0) a1 = c ;        //comparing i,j,k,l,m and each combination here is unique //
                     else if(i==1) a1 = d ;

                     if(j==0) a2 = c ;
                     else if(j==1) a2 = d ;

                     if(k==0) a3 = c ;
                     else if(k==1) a3 = d ;

                     if(l==0) a4 = c ;
                     else if(l==1) a4 = d ;

                     if(m==0) a5 = c ;
                     else if(m==1) a5 = d ;

                     p = (a1*pow(10,4))+(a2*pow(10,3))+(a3*pow(10,2))+(a4*pow(10,1))+(a5*pow(10,0)) ;  // Forming the number //
                     if(p%n != 0)   // Formed number shld not be divisible by c+d //
                     {
                         printf(" %d \n",p);      //print statement //
                     }
                  }
              }
          }
      }
    }
    return 0;

}
