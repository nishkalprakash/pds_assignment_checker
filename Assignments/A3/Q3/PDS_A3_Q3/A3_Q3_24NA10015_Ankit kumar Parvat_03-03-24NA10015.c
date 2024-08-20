#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter the four integers");
  scanf("\n %d%d%d%d",&a,&b,&c,&d);
  printf("\n a=%d",a);
  printf("\n b=%d",b);
  printf("\n c=%d",c);
  printf("\n d=%d",d);
  if((a==b)||(a==c)||(a==d)||(b==c)||(b==d)||(c==d)){
      printf("\n YES");}
  else {
      printf("\n NO");}
  return 0;
} 
//  used logical or         
