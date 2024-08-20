// Program to check if exactly 2 numbers are equal
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
void main()
{
  int counter=0,a,b,c,d; //counter variable taken to keep track of how many no.s are equal
  printf("a= ");
  scanf("%d",&a);
  printf("b= ");
  scanf("%d",&b);
  printf("c= ");
  scanf("%d",&c);
  printf("d= ");
  scanf("%d",&d);
  if(a==b)
  {
   ++counter; //incrementing counter every time 2 no.s are found to be equal
  }
  if(a==c)
  {
   ++counter;
  }
  if(a==d)
  {
   ++counter;
  }
  if(b==c)
  {
   ++counter;
  }
  if(b==d)
  {
   ++counter;
  }
  if(c==d)
  {
   ++counter;
  }
  if(counter==1) // if only 2 no.s are equal
  {
   printf("YES");
  }
  else
  {
   printf("NO");
  }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


