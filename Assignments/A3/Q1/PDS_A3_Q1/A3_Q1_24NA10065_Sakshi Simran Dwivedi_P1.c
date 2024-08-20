
#include <stdio.h>

int main()

{
  int a,b,c;
  
  printf (" Enter your birth date, month and year, \n");
  
  scanf ("%d%d%d", &a, &b, &c);
  
    if (b>12) {
  printf ("Invalid Date,\n");
  }
  
  if(a>31) {
  printf ("Invalid Date,\n");
  }

  if (b=2) {
  	if(a>=1 && a<=28) {
  	printf ("Valid Date,\n");
  	}
  		if(a==29) {
  			if(c%4!=0) {
  			printf("Invalid Date,\n");
  			}
  			if(c%4==0) {
  			printf("Valid Date,\n");
  			}
  		}
  	}
  	
  if (b==4 || b==6 || b==9 || b==11) {
 	if(a>=1 && a<=30) {
  	printf ("Valid Date,\n");
  	}
  		if (a==31) {
  		printf("Invalid Date,\n");
  		}
  	}
  	
  if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) {
  	if (a>=1 && a<=31) {
  	printf ("Valid Date,\n");
  	}
  }
}
   
    
