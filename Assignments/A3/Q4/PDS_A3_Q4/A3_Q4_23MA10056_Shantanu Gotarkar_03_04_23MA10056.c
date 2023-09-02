+//Roll No.:23MA10056.c
//Name : Shantanu


#include <stdio.h>
int main()

{
  int a,b,c,d,px,py;

  printf("The bottom left corners of the rectangle are");
  scanf("%d %d ", &a,&b);
  printf ("The top right corners of the recrangle are");
  scanf("%d %d ", &c, &d);

  

  if ((c>a)&&(d>b))
    
    { printf("The rectangle is well formed ");
      scanf("%d %d ", &px, &py);

      if ((px>a)&&(px<c)&& (py>b) && (py<d))
	{printf ("point lies inside the rectangle");
	  if ((px==a)&&(py>b)&&(py<d))
	    { printf("Point lies on left side ");}
	  else if (( px==c)&&(py>b)&&(py<d))
	    { printf("Point lies on right side ");}

	  else if ((py==b)&&(px>a)&&(px<c))
	    { printf("Point lies on the bottom side ");}
	  else if ((py==d)&&(px>a)&&(px<c))
	    { printf("Point lies on top side ");}
	  else if ((px==a)&&(py==d))
	    { printf("Point lies on top left corner");}
	  else if((px==c)&&(py==b))
	    { printf("Point lies on bottom right corner ");}
	  else if (( px==c)&&(py==d))
	    { printf("Point lies on the top right corner");}
	  else 
	    { printf("Point lies on the bottom left corner");}}}
	
    

	  else
	    {  printf("The point lies outside the rectangle ");}}

	  
	
	  
	    
  else
    printf("ILL formed rectangle ");

	  return 0 ;
	}

  
      
