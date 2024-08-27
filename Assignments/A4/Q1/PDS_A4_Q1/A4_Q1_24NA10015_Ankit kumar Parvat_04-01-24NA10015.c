#include<stdio.h>
int main()
{
  int n,a,b,c;
  
  scanf("%d",&n);
  if (n>0){
    b=1;
    c=-1;
    printf("\n %d , %d",b,c);
    for (int i=3;i<=n;++i){
      a=c;
      c=-(c-b);
      b=a;
      printf(", %d ",c); } 
  }    
  else printf("N is invalid");
  return 0;
}  
    
       
       

         
      
