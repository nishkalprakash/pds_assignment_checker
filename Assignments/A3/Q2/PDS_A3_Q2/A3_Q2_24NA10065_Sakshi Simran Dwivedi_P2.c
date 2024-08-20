
#include <stdio.h>

int main ()

{

 int dmny, wmny, cbal, ex, bal;
 
  bal=0;
  
  printf ("Enter amount of money to be deposited,\n");
  scanf ("%d", &dmny);
  
  printf ("Enter amount to be withdrawn,\n");
  scanf ("%d", &wmny);
  

  	
   bal= dmny-wmny;
  

   if (wmny>dmny) {
  	printf ("Balance is insufficient,\n");
  	  printf ("Deposited= %d,\n", dmny);
          printf ("Withdrew failed,\n");
          printf ("Available Balance= %d,\n" ,dmny);
  
  	}
  	
  	if (wmny<=dmny) {
  	  printf ("Deposited= %d,\n", dmny);
  	  printf ("Withdrew= %d,\n", wmny);
  	  printf ("Available Balance= %d,\n", bal);
  
 	}
 	
 }
  	
