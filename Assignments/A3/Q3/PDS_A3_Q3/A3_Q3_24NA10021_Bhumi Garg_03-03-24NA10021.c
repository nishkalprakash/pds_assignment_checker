// Code to print YES only if exacty 2 integers are equal
// Code Creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
int main ()

{ 
      int a, b, c, d;
      
      printf(" Enter 4 integers a, b, c, d: ");
      scanf (" %d%d%d%d", &a, &b, &c, &d);
      
      if (a==b && a != c && a != d && b != c && b != d)
       printf ("YES");
     
      else if ( b==c && b != a && b != d && c != a && c != d)
       printf ("YES");
      
      else if ( c==d && c != a && c != b && d != a && d != b)
       printf ("YES");
      
      else if ( a==d && a != b && a != c && d != b && d != c)
       printf ("YES");
       
      else if ( a==c && a != b && a != d && c != b && c != d)
       printf ("YES");
       
      else if ( b==d && b != a && b != c && d != a && d != c)
       printf ("YES");
       
     else 
     printf ("NO");
     
 }
       
       
      
      
      
      
      
      
      
      
      
     
