//roll no.=23GG10041
//name= Samriddhi Ahuja
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x[50],i,j,n,temp;
  printf("enter the number of random numbers to be generated=\n");
  scanf("%d",&n);
  printf("x:\n");
  for(i=0;i<=n;i++){
    x[i]=rand()%91 +10;
    printf("%d\n", x[i]);}
  printf("interchange=\n");
  for(i=0;i<n-2;i++){
  if(i%2==0&& x[i+2]<x[i]);{
    temp = x[i];
      x[i]=x[i+2];
      x[i+2]=temp;
      printf("%d\n%d\n",x[i],x[i+2];}
  }
  return 0;
}
      
    
    
    
