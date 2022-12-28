#include<stdio.h>
  int print_term(int k); 
  int main()
{int k;
 scanf("%d",&k);
int t;
 int i;
  
if(k<0)
   printf("invalid input ");
else 
{ 
  for(i=0;i<=k;i++)
  {
   t=3*print_term(i-1)*print_term(i-2)-2*print_term(i-2)*print_term(i-3)+1;
    printf("%d \n",t);
    }
 }
  

  
                     





   return 0;
}


int print_term(int k)
{
 int a;
  
    if(k==0)
      {a=0;}
  
    else if(k==1)
      {a=1;}
   
     else if(k==2)
      {a=2;}
 
 return a;
  
}
