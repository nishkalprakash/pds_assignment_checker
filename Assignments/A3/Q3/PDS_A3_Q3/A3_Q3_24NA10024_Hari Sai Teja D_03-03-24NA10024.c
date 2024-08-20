#include <stdio.h>

int main()
{
    int a, b, c, d, equal;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
   equal = 0;
   if (a==b)
   equal++ ;
   if (a==c)
   equal++ ;
   if (a==d)
   equal++ ;
   if (b==c)
   equal++ ;
   if (b==d)
   equal++ ;
   if (c==d)
   equal++ ;
   
   if (equal == 1) 
   printf ("Yes");
   else printf("No \n");
   }
   
