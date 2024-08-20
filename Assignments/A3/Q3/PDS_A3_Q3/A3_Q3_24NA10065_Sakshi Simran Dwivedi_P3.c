
#include <stdio.h>

int main ()

{

  int a,b,c,d;
  
  printf ("Enter four numbers,\n");
  
  scanf ("%d%d%d%d", &a, &b, &c, &d);  
  
  if ((a==b)&&(b==c)&&(c==d)) {
  		printf("NO,\n");
  	}	
  	
  else if (((a==b)&&(a==c))||((b==c)&&(c==d))||((a==c)&&(c==d))) {
  		printf ("NO,\n");
  		}
  		
  	else if ((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)) {
  	printf ("NO,\n");
  	}
  	
  else printf ("YES,\n");
  
  }
  		
  		
