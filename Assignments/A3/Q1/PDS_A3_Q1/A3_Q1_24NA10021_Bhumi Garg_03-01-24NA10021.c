// Code to check for validity of date
// Code Creator : Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
int main ()

{   
      int D, M , Y;
      
      printf (" Enter the date in DD MM YYYY format: ");
      scanf (" %d%d%d", &D, &M, &Y);
    
      if ((M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) && D<=31)
      printf (" Valid Date");
      
     else if ((M == 4 || M == 6 || M == 9 || M == 11) && D <= 30)
      printf (" Valid Date");
      
    
     else if ( M == 2 && (Y % 4 == 0 && Y % 400 == 0) && D <= 29)
      printf (" Valid Date");
      
       else if ( M == 2 && (Y % 4 == 0 && Y % 100 == 0 && Y % 400 != 0) && D <= 29)
      printf (" Invalid Date");
      
       else if ( M == 2 && (Y % 4 == 0 && Y % 400 != 0 && Y % 100 != 0) && D <= 29)
      printf (" Valid Date");
      
      else if ( M == 2 && Y % 4 != 0 && D <= 28)
      printf (" Valid Date");
      
      else 
      printf (" Invalid Date");
      
      
}
 
      
      
