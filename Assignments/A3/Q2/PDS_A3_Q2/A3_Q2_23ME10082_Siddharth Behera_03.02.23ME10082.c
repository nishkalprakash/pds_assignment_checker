//Roll number:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
int main()
{
  int x;
  printf("enter the mark=");
  scanf("%d",&x);
  if (x>=90 && x<=100)
    {
    printf("Grade=EX");
    }
  else if (x>=80 && x<=89){
    printf("Grade=A");
  }
  else if(x>=70 && x<=79)
    {
    printf("Grade=B");
    }
  else if (x>=60 && x<=69)
    {
    printf("Grade=C");
    }
    else if (x>=50 && x<=59)
      {
    printf("Grade=D");
      }
    else if (x>=35 && x<=49)
      {
    printf("Grade=p");
      }
  else if(x>=0 && x<35)
    {
    printf("Grade=f");
    }
  return 0;
}
       

      
