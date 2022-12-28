/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 6
  Question - PRINTING THE TERMS OF SERIES
*/
#include<stdio.h>
int print_term(int k);
int main()
{
   int i,k;
   printf("Enter the number of terms :");              // TAKING NUMBER OF TERMS FROM USER .
   scanf("%d",&k);

    if (k<0)
    {
      printf("Invalid input");
    } 
    for (i=0;i<k;i++)                      // CALLING FUNCTION print_term FOR EVALUATING THE TERMS
    { 
     printf("%d ,",print_term(i));
    }

  return 0;
} 
     int print_term(int n)
    {
       if (n==0)                               //BASE CASES
         return 0;
       if (n==1)
         return 1;
       if (n==2)
         return 2;
     return 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;    // EVALUATING NTh term
}
