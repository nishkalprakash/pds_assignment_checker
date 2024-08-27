
#include <stdio.h>

int main ()
{ 
int i, a, max1, max2;  //we need to find largest and second largest of entered no.//

  printf("Enter a number: \n");
  scanf ("%d", &a);  //entering the first no.//
  
  printf ("largest no. : %d \n", a);
  printf ("Second largest no. : Value not entered yet \n");
  
  max1=a; //till no second no. is there, "a" will be considered as max//
  
  while (1) {  //infinite looping//
   printf("Enter a number: \n");
   scanf ("%d", &i);
   if (i<0) { break; }  
   // terminate the program upon entering negative integer//
   if (max1<i){ 
    //whatever the max was till now is less than newly entered no. then prev max will become second largest and newly entered is new max//
   
   max2=max1;
   max1=i;
   }
   
   if (max2<i && i!=max1) { 
   max2=i;
  
   }
    printf ("largest no. : %d \n", max1);
   printf ("Second largest no. : %d \n", max2);
  }
  }
