//SHAURYA SINGH RAGHAW
//23AG30039

#include<stdio.h>
int main()
{
  int a;

  printf("enter the student's marks:\n");
  scanf("%d",&a);

  if(a>100)
    {
      printf("wrong input");
    }
  else if(a>=90)
    {
      printf("grade=EX");
    }
  else if(a>=80)
    printf("grade=A");
  else if(a>=70)
    {
      printf("grade=B");
    }
  else if(a>=60)
    {
      printf("grade=C");
    }  
  else if(a>=50)
    { printf("grade=D");}
  else if(a>=35)
    {
      printf("grade=P");
    }  
  else if(a<35)
    {
      printf("grade=F");
    }  

  return 0;

}
    
    
