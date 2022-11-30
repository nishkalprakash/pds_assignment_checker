#include<stdio.h>
int main()
{ 
  int a,R,C;
  printf("Enter the number:\n");
  scanf("%d",&a);
  for(C=1;C<=a;C++)
{
 for(R=1;R<=C;R++)
{   
  if(R%2==0){
 printf("O ");}
 else if(R%2!=0){
 printf("1 ");}
}
 printf("\n"); }
return 0;
}
  

  

