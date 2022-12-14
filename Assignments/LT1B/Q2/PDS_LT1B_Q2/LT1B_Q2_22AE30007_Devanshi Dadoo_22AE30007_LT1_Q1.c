/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
LAB TEST 1
desciption: TO ARRANGE NUMBERS IN THE GIVEN PATTERN
*/

#include<stdio.h>

int main()
{
 int n;
  printf("enter a number "); // INPUTTING THE NUMBER 
  scanf("%d", &n);
  for(int i=1; i<n+1; i++) // OUTER LOOP TO DEFINE I
  { 
   for(int j=0; j<i; j++) // INNER LOOP TO PRINT I
   {  
    printf("%d ", i);
   }
   printf("\n"); // TO GO TO THE NEXT LINE 
  }
}



