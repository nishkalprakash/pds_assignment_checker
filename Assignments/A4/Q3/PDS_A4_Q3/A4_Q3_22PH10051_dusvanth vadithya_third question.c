#include<stdio.h>

int main()
{
  long int n,p;
  printf("enter any number");
  scanf("%ld",&n);

  if(n==0){
  printf("zero");
  }
  
  while(n!=0){
  p=n%10;
  n=n/10;
  
  
  if(p==1)
  {printf("one");}
  if(p==2)
  {printf("two");}
  if(p==3)
  {printf("three");}
  if(p==4)
  {printf("four");}
  if(p==5)
  {printf("five");}
  if(p==6)
  {printf("six");}
  if(p==7)
  {printf("seven");}
  if(p==8)
  {printf("eight");}
  if(p==9)
  {printf("nine");}
}
  return 0;

}
