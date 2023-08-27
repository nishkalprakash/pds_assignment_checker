//Roll no:<23MT30010>
//Name:Purva Harde>

#include <stdio.h>
int main ()
{ int a; int b; int c=12;
  
  scanf ("%d",&a);
  b=a/c;
  if (a % c ==0){                // to check if the nuber is divible  by 12
    printf ("The person is %d years old\n",b);
  }
  else {
    printf ("The person is %d years old\n", b+1); /*if not divible by 12 we round off by adding 1*/
  }
    return 0;
  }
 
