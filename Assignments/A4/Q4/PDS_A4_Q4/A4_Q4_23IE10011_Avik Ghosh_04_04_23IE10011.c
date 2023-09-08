//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int n,k=0;
    while(1){
      printf("Enter a single digit number=");
      scanf("%d",&n);
      if(n == 5)
	k++;
      if(n == 1 && k == 1)
	k++;
      if(n != 7 && k == 2)
	k++;
      if(n == 7 && k == 3)
      { printf("Pattern found\n");
	    break;}
	if(n < 0)
	  break;
	}
    return 0;
}
	
  
