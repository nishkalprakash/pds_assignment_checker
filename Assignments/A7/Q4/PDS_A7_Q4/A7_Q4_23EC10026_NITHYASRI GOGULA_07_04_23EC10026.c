#include<stdio.h>
int main ()
{
  int n[50];
 
 for( int i=0;i<50;i++)
   {
     n[i]=10+rand()%50;
   }

 for(int i=0;i<50;i++)
   {
     printf("%d ",n[i]);
   }
 
}
